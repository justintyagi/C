#include <stdio.h>

int main() {

    // array declaration and initialization
    int arr[5] = {2, 4, 8, 12, 16};

    arr[0] = 1;
    // accessing element at index 2 i.e 3rd element
    printf("%d ", arr[2]);

    // accessing element at index 4 i.e last element
    printf("%d ", arr[4]);

    // accessing element at index 0 i.e first element
    printf("%d ", arr[0]);
    return 0;
}