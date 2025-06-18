    # include<stdio.h>
    int main(){
        int i,j ;
        int n=5;
        for(int i=0; i<=n; i++){

            for(int j=5; j>=i; j--){
            printf("    *"); 
        }
        printf("\n");
    }
        
        return 0;
    }