# include<stdio.h>
calculateprice(float value){
    value = value + value*0.18;
    printf("%f", value);
 
}

int main(void){
    float value;
    printf("enter the value");
    scanf("%f",&value);
   calculateprice( value);
   
   return 0;
}