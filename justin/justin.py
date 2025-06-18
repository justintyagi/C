import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

# Total number of stars per galaxy
num_stars = 100

# Function to create a rotating galaxy
def create_galaxy(center_x, center_y, velocity_x, velocity_y, rotation_dir):
    angles = np.random.uniform(0, 2 * np.pi, num_stars)
    radii = np.random.uniform(1, 10, num_stars)
    
    x = center_x + radii * np.cos(angles)
    y = center_y + radii * np.sin(angles)
    
    vx = velocity_x + rotation_dir * radii * -np.sin(angles) * 0.05
    vy = velocity_y + rotation_dir * radii *  np.cos(angles) * 0.05
    
    return x, y, vx, vy

# Create two galaxies
x1, y1, vx1, vy1 = create_galaxy(-30, 0, 0.5, 0, rotation_dir=1)
x2, y2, vx2, vy2 = create_galaxy(30, 0, -0.5, 0, rotation_dir=-1)

# Combine both galaxies
x = np.concatenate([x1, x2])
y = np.concatenate([y1, y2])
vx = np.concatenate([vx1, vx2])
vy = np.concatenate([vy1, vy2])

# Gravity constant
G = 0.05

# Setup figure
fig, ax = plt.subplots()
sc = ax.scatter(x, y, s=2, color='white')
ax.set_facecolor('black')
ax.set_xlim(-100, 100)
ax.set_ylim(-100, 100)
ax.set_title('Galaxy Collision Simulation')

def update(frame):
    global x, y, vx, vy
    
    for i in range(len(x)):
        dx = x - x[i]
        dy = y - y[i]
        dist_sq = dx**2 + dy**2 + 1  # avoid divide by zero
        inv_dist3 = 1.0 / np.sqrt(dist_sq**3)
        fx = np.sum(dx * inv_dist3)
        fy = np.sum(dy * inv_dist3)
        
        vx[i] += G * fx
        vy[i] += G * fy
    
    x += vx
    y += vy
    sc.set_offsets(np.column_stack((x, y)))
    return sc,

ani = FuncAnimation(fig, update, frames=300, interval=30)
plt.show()
