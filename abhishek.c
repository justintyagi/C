# include<stdio.h>
int main(){
int day; // 1-monday;2-tuesday;3-wednesday
printf("enter day(1-7)");
scanf("%d", &day);
switch (day)
{
case 1 : printf("monday");
        break;
case 2 : printf("tuesday");
        break;  
case 3 : printf("wednesday");
        break;
case 4 : printf("thrusday");
         break;
case 5 : printf("friday");
         break;
case 6 : printf("saturday");
         break;
case 7 : printf("sunday");
         break;
case 8 : printf("default");

    return 0;
}

}