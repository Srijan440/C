// write a menu driven program that perfoms the following things
// 1--Take a number from user and check wether it is a negative or positive number.
// 2--Take an input from user and check wether it is odd or even.
// 3-- Take input from a user and check wether it is pelindrome or not.
// and print the invalid input.

#include <stdio.h>

int main()
{

    printf(" 1. Check for Negative or Positive:\n");
    printf(" 2. Check for Odd or Even:\n");
    printf(" 3. Check for Pelindrome or Not:\n");

    int choice;
    printf("Choose no:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Value num:");
        int num;
        scanf("%d", &num);

        if (num > 0)
        {
            printf("Given number is positive\n");
        }

        else if (num < 0)
        {

            printf("Given number is negative\n");
        }
        else

            printf("It is neither positive nor negative\n");

        break;

    case 2:
        printf("Value num1:");
        int num1;
        scanf("%d\n", &num1);
        if (num1 / 2 == 0)
            printf("Given input is an even number\n");

        else
            printf("Given input is an odd number\n");

        break;

    case 3:
        printf("Value num3:");
        int num3;
        scanf("%d", &num3);
        int div;
        int a = num3;
        int rev = 0;
        while (a != 0)
        {
            div = a % 10;
            rev = rev * 10 + div;                                // examples of pelindrome: 121, 1221, 13431
            a = a / 10;
        }
        printf("%d\n", rev);
        if (rev==num3)
        {
            printf("Given input is a palindrome number.\n");
        }
        else
        {
            printf("Given input is not a palindrome number.\n");
        }
        break;
    default:
        printf("Invalid input\n");
    }
}
