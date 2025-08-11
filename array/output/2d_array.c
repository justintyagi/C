# include<stdio.h>
int main(){
  int n,i,j;
  printf("enter the number");
  scanf("%d",&n);
  for( i=0; i<=n; i++){
    for( j=0; j<=n; j++){
      printf(" enter the element%d",j);
      scanf("%d",j);
    }
    printf("enter the element %d",i);
    scanf("%d",i);
  }
int arr[i][j];
for(i=0; i<=n; i++){
  for(j=0; j<=n; j++){
    printf("%d",arr[i][j]);
  }
  printf(" ");
}
return 0;
}