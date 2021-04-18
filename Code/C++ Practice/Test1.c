#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    if (a <= b)
    {
        if (a <= c)
        {
            printf("%d is minimum", a);
        }
        else
        {
            printf("%d is minimum", c);
        }
    }
    else if (b <= a)
    {
        if (b <= c)
        {
            printf("%d is minimum", b);
        }
        else
            printf("%d is minimum", c);
    }
    else
        printf("%d is minimum", c);
}