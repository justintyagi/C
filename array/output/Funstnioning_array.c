# include<stdio.h>
printnumber( int arr[],int n){
    for(int i=0; i<n; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
int main(){
int arr[]={1,2,3,4,5,6};
printnumber(arr, 6);
return 0;
}