# include<stdio.h>
int sum(int a, int b);
printtable(int n){  //deceleration with actual paremeter \arguement 
for(int i=1; i<=10; i++){
    printf( "%d \n",i*n);
}
}
int main(void){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printtable(n);//argument\actual paremeter 
    return 0;
}
