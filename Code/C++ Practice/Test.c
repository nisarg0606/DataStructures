#include <stdio.h>

void main()
{
    int a, b, c, min = 0;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    if (a <= b && a <= c)
    {
        printf("%d is the smallest number", a);
        if (a % 2 == 0)
        {
            printf(" and it is an even number");
        }
        else
            printf(" and it an odd number");
    }
    else if (b <= a && b <= c)
    {
        printf("%d is the smallest number", b);
        if (b % 2 == 0)
        {
            printf(" and it is an even number");
        }
        else
            printf(" and it an odd number");
    }
    else
    {
        printf("%d is the smallest number", c);
        if (c % 2 == 0)
        {
            printf(" and it is an even number");
        }
        else
            printf(" and it an odd number");
    }
}