#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    // Step 1: Number of elements
    printf("How many numbers you what?\n");
    scanf("%d", &n);

    // Step 2: Array banate hain
    float arr[n];

    // Step 3: User se values lo
    printf("Please enter value for the %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    // Step 4: Average calculate karo
    avg = sum / n;

    // Step 5: Result dikhayein
    printf("\nAverage = %.2f\n", avg);

    return 0;
}

