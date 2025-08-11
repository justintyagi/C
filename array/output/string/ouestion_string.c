#include<stdio.h>
#include<string.h>

char username(int arr[]){
    for(int i=0; arr[i]!='\0'; i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}
int length(char arr[]){
    int count=0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count-1;
}
int main(){
    char name[]="justin";
    // printf("length is %d",strlen(name));
    int length= strlen(name);
    printf("length is %d",length);
    return 0;
    


}