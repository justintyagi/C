#include<stdio.h>
int main(){
int x=10,y=5,temp;
temp=x;
x=y;
y=temp;

printf("After swaping the value x=%d,y=%d\n",x,y);
return 0;
}