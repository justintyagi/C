#include<stdio.h>
char printstring(int arr[]){
    for(int i=0; arr[i]!='\0'; i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}
int main(){
    // char str [100];
    // fgets(str,100,stdin);
    // puts(str);
    // char *canchange= "hello world";
    // puts(canchange);
    // canchange="justin";
    // puts(canchange);
    char cannotchange[]="hello world";
    puts(cannotchange);
    
    return 0;
}