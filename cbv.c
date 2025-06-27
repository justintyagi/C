#include <stdio.h>

void increment(int *num){
    *num = *num + 10;
    printf("%d\n",num);
}

int main(){
    int x = 5;
    printf("%d\n",x);
    increment(&x);
    printf("%d\n",x);
    return 0;
}