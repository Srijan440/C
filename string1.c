// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// int n,i;
// printf("Enter the no for factorial:\n");
// scanf("%d",&n);
// int fact=1;
// for (i=n;i>=1;i--)
// {
//  fact=(fact*i);
// }
// printf("Factorial :%ld",fact);
// printf("\n");
// int rev=0;
// int div;
// while(fact!=0)
// {
//         div=fact%10;
//        rev=((rev*10)+div);
//         fact=fact/10;
// }
// printf("The reverse of given factorial is:%ld",rev);
// }


        
#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);

  
    if((1==a)||(1==b))
    printf("one\n");
    if((2==a)||(2==b))
    printf("two\n");
    if((3==a)||(3==b))
    printf("three\n");    
    if((4==a)||(4==b))
    printf("four\n");
    if((5==a)||(5==b))
    printf("five\n");
    if((6==a)||(6==b))
    printf("six\n");
    if((7==a)||(7==b))
    printf("seven\n");
    if((8==a)||(8==b))
    printf("eight\n");
    if((9==a)||(9==b))
    printf("nine\n");

    
    if ((a>9)||(b>9))
    printf("nine\n");

    
    



   
}

