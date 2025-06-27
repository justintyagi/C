#include <math.h>
int main()
{
    double p = 10000;
    double r = 5;
    double t = 2;

    // printf("enter the value of p\n");
    // scanf("%d", &p);
    // printf("enter the value of r\n");
    // scanf("%d", &r);
    // printf("enter the value of n\n");
    // scanf("%d", &n);
    // printf("enter the value of t\n");
    // scanf("%d", &t);
    // float rate = r / (n * 100);
    double a = p * ((pow((1 + r / 100), t)));
    // double a = p * ((pow((1 + rate * 100), n*t)));

    double CI = a - p;
    printf("The total amout of intrest is :%.3lf\n", a);
    printf("The total amout of CI is :%.2lf", CI);
    return 0;
}

// dout