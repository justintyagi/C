
#include <math.h>

int main() {
    float p, r, n, t;
    double amount, compound_interest;

    printf("Enter the principal investment (P): ");
    scanf("%f", &p);

    printf("Enter the annual interest rate (R in %%): ");
    scanf("%f", &r);

    printf("Enter the number of times interest is compounded per year (n): ");
    scanf("%f", &n);

    printf("Enter the time in years (t): ");
    scanf("%f", &t);

    
    r = r / 100;

    amount = p * pow(1 + r / n, n * t);
    compound_interest = amount - p;

    printf("Compound Interest is: %.2f\n", compound_interest);
    printf("Total Amount is: %.2f\n", amount);

    return 0;
}
