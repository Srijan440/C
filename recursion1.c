//recursion for adding the digits.

#include <stdio.h>
int sum(int p)
{
    if(p==0)
    {
    return 0;
    }
    else
    {
        return p%10+sum(p/10);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
        printf("%d",sum(n));

}