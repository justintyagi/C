# include<stdio.h>
 int variable(int n){
    int num = n*n;
    printf("%d\n",num);
}
int mian(){
    int number =4;
    variable(number);
    printf("%d",number);
    return 0;
}