# include<stdio.h>
#include<math.h>
void area_of_squre(float side){
    return side*side;
}
void area_of_circle(float radi){
return 3.14*radi*radi;
}
void area_of_rectangle(float a, float b){
return a*b;
}
int main(){
float radi=5.0;
printf("%f",area_of_circle(radi));
return 0;
}