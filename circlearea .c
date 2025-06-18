# include<stdio.h>
int main(){
    int side;
    printf("enter the side (3-6)");
    scanf("%d",&side);
    switch(side){
        case 1 : printf("triangle");
                 break;

        case 2: printf("square");
                 break;

         case 3: printf("pentgon");
                 break;

        case 4 : printf("hexagon");
                 break;

        return 0;
                 

    }
}