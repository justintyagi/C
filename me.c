 /*# include<stdio.h>
int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            printf("%d \n"i &&j);
        }
        printf("\n");
    }
    return 0;
}*/
# include<stdio.h>
int  main(){
 int i,j;
 char ch;
 for(i=1; i<=5; i++){
    ch='A';
    for(j=1; j<=5; j++){
        printf("%c",ch);
        ch++;
    }
    printf("\n");
     }
 return 0;
}
