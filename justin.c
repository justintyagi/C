#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("enter the number\n");
        scanf("%d", &n);
        // printf("%d", n);
        if (n % 2 != 0)
        {
            break;
        }
    } while (1);
    printf("Odd number");
    return 0;
}