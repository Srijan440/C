#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i;
printf("Enter the no for factorial:\n");
scanf("%d",&n);
int fact=1;
for (i=n;i>=1;i--)
{
 fact=(fact*i);
}
printf("Factorial :%d",fact);
printf("\n");
int product=1;
while(fact!=0)
{
       int div=fact%10;
       product=product*div;
        fact=fact/10;
}
}

