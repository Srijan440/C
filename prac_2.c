#include <stdio.h>

int sum(int a, int b);

int main()
{
    int c;
    c= sum(60, 40);
    printf("Their sum is %d\n",c);
    return 0;
}

int sum(int a,int b)
{
    int c =a+b;
    return c;
}