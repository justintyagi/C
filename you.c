#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("uppercase");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("lower case");
    }
    else
    {
        printf("not a letter");
    }
    return 0;
}