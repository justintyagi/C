# include<stdio.h>
int max_of_four(int a, int b,int c,int d){
if(a>b && a>c && a>d){
    return a;
}
else if(b>a&&b>c&&b>d){
    return b;
}
else if(c>a&&c>b&&c>d){
    return c;
}
else if (d>a&&d>b&&d>c){
    return d;
}
}
int main(){
int a,b,c,d;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
printf("enter the value of c");
scanf("%d",&c);
printf("enter the value of d");
scanf("%d",&d);
 int s =max_of_four(a,b,c,d);
 printf("The max value is:%d",s);
return 0;
}

