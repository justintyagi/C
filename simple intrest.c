# include<math.h>
int main(){
    float principal,Rate,Time;
    printf("Enter the principal:");
    scanf("%f",&principal);
    printf("enter the rate:");
    scanf("%f",&Rate);
    printf("enter the time period");
    scanf("%f",&Time);
    printf("the intrest is:%f",(principal*Rate*Time)/100);
    return 0;
}