#include <stdio.h>

int main()
{

    // array declaration and initialization
    int arr[5] = {2, 4, 8, 12, 16};
    int i;
    for (i = 0; i < 5; i++)
    {
        // printf("%d ", arr[i]);
        int temp = arr[i];
        arr[i] > temp;
        temp = arr[i];
    }

    printf("\n");

    for (i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}