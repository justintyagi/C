# include<stdio.h>
int main(){
   float price[3];
   printf("enter the first price");
   scanf("%f",&price[0]);
    printf("enter the second price");
   scanf("%f",&price[1]);
    printf("enter the Third price");
   scanf("%f",&price[2]);
   printf("first price=%f , second price = %f , Third price = %f", price[0]+(price[0]*0.18),price[1]+(price[1]*0.18),price[2]+(price[2]*0.18));

   return 0;


}