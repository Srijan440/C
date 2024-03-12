#include <stdio.h>
#include <math.h>


void checkprime(int copy)
{
    int i;
    int count=0;
    for(i=1;i<=copy;i++)
    {
        if(copy%i==0)
        {
            count++;
        }
    }
    if (count==2)
    {
        printf("Given number is Prime.\n");
    }
    else
    {
        printf("Given number is not a Prime.\n");
    }
}

void checkpalindrome(int copy1)
{
    int a = copy1;
    int div;
    int rev=0;
    while(a!=0)
    {
      div= a%10;
      rev= rev *10 + div;
      a=a/10;
    }
    if(copy1==rev)
    {
        printf("It is a pelindrome number.\n");
    }
    else
    {
        printf("It is not a pelindrome number.\n");
    }
}


void checkarmstrong(int copy2)
{
    int b = copy2;
    int count=0;
    while (b!=0)
    {
        count++;
        b=b/10;
    }
    int c=copy2;
    int div1;
    double sum=0;
    while (c!=0)
    {
        div1= c%10;
        sum = sum+ pow(div1,count);
        c = c/10;
    }
    printf("\nIts cube sum : %.f\n",sum);
    if(sum==copy2)
    {
        printf("It is armstrong number.\n");
    }
    else
    {
        printf("It is not a armstrong number.\n");
    }

}


    void drawpattern(int copy4)
    {
    int i,j;
    int point;
    scanf("%d",&point);
    for(i=0;i<=point;i++)
    {
        for(j=0;j<=point-1;j++)
        {
            if(((i==0))||(i==point)||((j==0)||(j==point-1)))
            printf(" *");
            else
             printf("  ");
        }
        printf("\n");
    }
    }

int main()
{
    int num,num1,num2,num3;
    printf("Enter any number for checking prime : ");
    scanf("%d",&num);
    printf("Enter any number for checking palindrome number : ");
    scanf("%d",&num1);
    printf("Enter any number for checking armstrong number : ");
    scanf("%d",&num2);
    checkprime(num);
    checkpalindrome(num1);
    checkarmstrong(num2);
    drawpattern(num3);
}
