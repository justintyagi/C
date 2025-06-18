# include<math.h>
float squrearea(float side)

{
 return side*side;
}

float areacircle(float radius){
    return 3.14*radius*radius;
}
float arearactungle(float a, float b){
    return a*b;
}
int main(){
float a=5.0;
float b=6.0;
float area=arearactungle( a , b);
printf("%f",area);

return 0;
}