#include <stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("ERROR");
    }
    else if (n == 1)
    {
        printf("one");
    }
    else if (n == 2)
    {
        printf("TWO");
    }
    else if (n == 3)
    {
        printf("THREE");
    }
    else if (n == 4)
    {
        printf("FOUR");
    }
    else if (n == 5)
    {
        printf("FIVE");
    }
    else if (n == 6)
    {
        printf("SIX");
    }
    else if (n == 7)
    {
        printf("SEVEN");
    }
    else if (n == 8)
    {
        printf("EIGHT");
    }
    else if (n == 9)
    {
        printf("NINE");
    }
    else if (n == 10)
    {
        printf("TEN");
    }
    else if (n % 2 == 0)
    {
        printf("EVEN");
    }
    else if (n % 2 != 0)
    {
        printf("ODD");
    }
    else if (n >= 100)
    {
        printf("EORROR");
    }
return 0;
}