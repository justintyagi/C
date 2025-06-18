#include <stdio.h>

int main() {
    long long num;
    int product = 1;

    printf("Koi bhi number daalein: ");
    scanf("%lld", &num);

    // Negative number ka handle
    if (num < 0) {
        num = -num;
    }

    // Agar number 0 hai to product bhi 0 hoga
    if (num == 0) {
        product = 0;
    }

    while (num != 0) {
        int digit = num % 10;  // last digit lo
        product *= digit;      // uska product karo
        num /= 10;             // last digit hatao
    }

    printf("Digits ka product: %d\n", product);

    return 0;
}
