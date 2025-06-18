# include<stdio.h>
int printgreater(int a,int b) {
if(a>b)
 printf("enter the first number ");
 scanf("%d",&a);
 printf("enter the second number");
 scanf("%d",&b);
    int z = printgreater(a,b);
    printf("the greter number is %d ",z);

    return 0;
}
 