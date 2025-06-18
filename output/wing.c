# include <stdio.h>

int main(){
int age ;
printf("enter age");
scanf("%d", &age);


  if(age > 18) {
    printf("adult \n");
    printf("they can drive a car \n");
    printf("they can also vote");
 }
 else {
    printf("not adult \n");

} 
return 0;

}