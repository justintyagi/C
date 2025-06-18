#include <stdio.h>

int main() {
    long long num;
    int sum = 0;

    printf("Koi bhi number daalein: ");
    scanf("%lld", &num);

   
    while(num != 0) {
        sum += num % 10;  // Last digit add karo
        num /= 10;        // Last digit hata do
    }

    printf("Digits ka sum: %d\n", sum);

    return 0;
}
