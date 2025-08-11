# include<stdio.h>
int main(){
    int x;
    int *Ptr;
    ptr = &x;
    *ptr = 5;
    printf("x=%d\n",x);
    printf("*ptr=%d",*ptr);
    return 0;

}
// #include <stdio.h>
// int main()
// {
//     int *ptr;
//     int x;
//     ptr = &x;
//     int *ptr = 0;
//     int *ptr += 5;
//     printf("x=%d\n", x);
//     printf("*ptr=%d", ptr);
//     return 0;
// }