# include<math.h>
int main(){
    float a,b,c;
    printf("enter the value of side a");
    scanf("%f",&a);
    printf("enter the value of side b");
    scanf("%f",&b);
    printf("enter the value of side c");
    scanf("%f",&c);
    if(a+b>c){
        printf("perimeter of the triangle:%f",a+b+c);
    }
    else
    printf("Invalid input: make surea+b>c");
    return 0;
}