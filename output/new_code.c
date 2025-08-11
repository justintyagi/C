# include<stdio.h>
int main(){
    int age= 22;
    int *ptr =&age;
    printf("%u\n",age);
    age++;
    printf("%u",age);
    return 0;

}