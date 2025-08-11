# include<stdio.h>
void table(int n){
for(int i=1; i<=10; i++){//formal paremeter 
    printf("%d\n",i*n);
}
}
int main(){
int n;
printf("enter the table number ");
scanf("%d",&n);
table(n);//argument /actual paremeter
return 0;
}