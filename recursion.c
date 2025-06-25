/*# include<stdio.h>
int sum(int n){
    if(n==1){
     return 1;

    }
    int sumNm1=  sum(n-1);   //sum of 1 to n
    int sumN = sumNm1 +n;
    return sumN;
}
int main(void){
    printf("sum is : %d",sum(5));
    return 0;
}*/
# include<stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1*n;
  return factN;
}
int main(){
    printf("factorial is : %d",fact(5));
    return 0;
}




