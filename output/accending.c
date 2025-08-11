// # include<stdio.h>
// int main(){
//     int n,i,j,temp;
//     printf("enter the elements:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("%d element:\n",n);
//     for(int i=0; i<n; i++){
//         scanf("%d",arr[i]);

//     }

// }
#include <stdio.h>

int main() {
    int n, i, j, temp;

    int arr[n];
    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d value", &n);


    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort for ascending order
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Elements in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
