#include <stdio.h>
int fibo(int p)
{
    if(p==1)
    return 1;
    if(p==0)
    return 0;
    else
    {
        return fibo(p-1)+fibo(p-2);
    }
}

int fact(int n)
{
    if(n==0 || n==1)
    return 1;
    else
    {
        return n*fact(n-1);
    }
}

int sum(int q)
{
    if (q==0)
    return 0;
    else
    while (q!=0)
    {
        return q%10+ sum(q/10);
    }
}



int main()
{
printf("   Menu   ");
printf("\n1.Fibbonacci");
printf("\n2.Factorial ");
printf("\n3.Sum\n\n");

int choice;
printf("Enter Choice : ");
scanf("%d",&choice);

switch (choice)
{
    case 1:
    printf("Enter the Number:");
    int num;
    scanf("%d",&num); 
    for(int i=0;i<num;i++)
    {
        printf("%d ",fibo(i)); 
    }
break;

case 2:
    printf("Enter the Number:");
    int n;
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,fact(n));
break;

case 3:
    printf("Enter the Numbers:");
    int num1;
    scanf("%d",&num1);
    printf("%d",sum(num1));


break;

default:
    printf("Invalid Choice");
break;

}
return 0; 
}