# include<stdio.h>
void swap(int arr[], int n ){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
          if(arr[j]>arr[j+1]){
            swap(&arr[j],arr[j+1]);
            swap ;
          }
          if(swap==0){
            break;
          }
        }
    }
}
void printarray(int arr[],int n){
        for(int i=0; i<n; i++){
        printf("%d",arr[i]);
        }     
        printf("\n");       
}
