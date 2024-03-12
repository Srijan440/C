#include <stdio.h>

int main()
{
    int a, b, c, i;
    scanf("%d", &a);
    scanf("%d", &b);

    c = a + b;
    int count = 0;
    for (i = 1; i <= c; i++)
    {
        if (c % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("Their sum is prime.", c);
    }
    else
    {
        printf("Thier sum is not prime.");
    }
}