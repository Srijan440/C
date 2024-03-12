//write to program to take an input from an user and check whether its prime or not and check whether its odd or evenn and check whether its a postive number or not.

#include <stdio.h>

void checkprime(int copy1)
{
    int count=0;
    for(int i=1; i<=copy1; i++)
    {
        if(copy1%i==0)
        {
        count++;
        }                  
    }
    if(count==2)
    printf("\nIt is prime number.");
    else
    printf("\nIt is not a prime number.");
    
}
void oddeven(int copy)
{
    
    if(copy%2==0)
    {
    printf("\neven");
    }
    else
    {
    printf("\nodd");
    }
   
}
void positiveornegative(int copy1)
{
    if(copy1>0)
    {
        printf("\nIt is a positive number.");
    }
    else
    {
        printf("\nIt is a negative number.");
    }
    
}


int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    checkprime(num);
    oddeven(num);
    positiveornegative(num);
}
