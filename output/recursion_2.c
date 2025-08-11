# include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNmu1=sum(n-1);
    int Tsum=sumNmu1*n;
    return Tsum;
}
int main(){
    int n=5;
printf("%d",sum(n));
return 0;
}