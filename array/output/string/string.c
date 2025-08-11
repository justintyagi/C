#include<stdio.h>
 char printstring(char arr[]){
    for(int i=0; arr[i] !='\0'; i++){
        printf("%c",arr[i]);
    }
    printf("\n");
 }
int main(){
  char Firstname[50];
  scanf("%s",Firstname );
  printf("your name is %s",Firstname);
  return 0;
}