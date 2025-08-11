# include<stdio.h>
int sum(int a, int b);
int main(){
    int a,b;
 printf("ente rthe number a");
 scanf("%d",&a);
 printf("enter the number b");
 scanf("%d",&b);
 int s=a+b;
 printf("the sum of a+b %d:", s);
 return 0;
}
int  sum(int a,int b){
    return a+b;
}