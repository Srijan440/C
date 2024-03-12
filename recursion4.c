//recursion for factorial.


// #include <stdio.h>

// int fact(int n)
// {
//     if (n==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return (n*fact(n-1));
//     }
// }



// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("%d",fact(n));    
//     return 0;
// }



//recursion for adding any digits of numbers;

// #include <stdio.h>

// int sum(int n)
// {
//     if (n==0)
//     {
//     return 0;
//     }
//     else 
//     {
//         return (n%10+sum(n/10));
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("%d",sum(n));
//     return 0;
// }


//recursion for product of any digit of numbers.

// #include <stdio.h>

// int product(int num)
// {
//     if (num==0)
//     {
//         return 1;
//     }
//     else 
//     {
//         return (num%10* product(num/10));
//     }
// }
// int main()
// {
//     int num;
//     scanf("%d",&num);
//     printf("%d",product(num));    
//     return 0;
// }



// switch case recursion

// #include <stdio.h>

//     int fact (int num)
//     {
//         if (num==0)
//         {
//             return 1;
//         }
//         else
//         {
//             return (num * fact(num-1));
//         }
//     }
//     int main()
//     {
//         printf("     Menu\n");
//         printf("1) Factorial\n");
    
//     int choice;
//     {
//         printf("Enter your Choice: ");
//         scanf("%d",&choice);
//     }

//     switch(choice)
//     {
//         case 1:
//         {
//         int num;
//         printf("Enter a number to find its factorial: ");
//         scanf("%d",&num);
//         printf("%d",fact(num));
//         break;
//         }
//     default:
//     printf("Invalid case");
//     break;
//     }
//     return 0;
//     }

#include <stdio.h>

int main()
{
    int fibo(int p)
    {
        if (p==1)
        {
            return 1;
        }
        else if (p==0)
        {
            return 0;
        }
        else
        {
            return (fibo(p-1)+fibo(p-2));
        }
    }    
    int main()
    {
        int num;
        scanf("%d",&num);
        for(int i=0;i<num;i++)
        {
        printf("%d",fibo(i));
        }
        }
    return 0;
}