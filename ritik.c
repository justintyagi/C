# include<stdio.h>
int main(){
    int temprature;
    printf("enter temprature(-10,40)\n");
    scanf("%d",&temprature);
    if(temprature<=0){
        printf("cold");
    }
    else if(temprature<=10){
         printf("normal temprature");
    }
    else if(temprature<=20){
        printf("warm temprature");
    }
    else if(temprature<=30){
        printf("hot temprature");
    }
    else {
        printf("very hot temprature");
    }
    return 0;

}