// Write a menu driven program to perform
// 1. factorial and factorial reverse and then check it is palindrome or not.
// 2. take your name as input reverse it and print the character at index 4.
// 3. take n number as input and print the number of prime numbers in that array.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    printf(" 1. Factorial and its Reverse also its Palindrome:\n");
    printf(" 2. Name and its reverse and print of index 4:\n");
    printf(" 3. array and check how many prime or not:\n");

    int choice;
    printf("Choose no:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Value num:");
        int num;
        int i;
        int div;
        scanf("%d", &num);
        int fact = 1;
        for (i = 1; i <= num; i++)                     // for(i=num;i>=1;i--)
        {
            fact = (fact * i);
        }
        printf("Factorial :%d", fact);
        printf("\n");

        int rev1 = 0;                                   //factorial and factorial reverse and then check it is palindrome or not.
        int num1;
        num1 = fact;
        while (num1 != 0)
        {
            div = num1 % 10;
            rev1 = (rev1 * 10) + div;
            num1 = num1 / 10;
        }
        printf("Reverse :%d", rev1);
        printf("\n");

        int div1;
        int a = rev1;
        int rev = 0;
        while (a != 0)
        {
            div1 = a % 10;
            rev = rev * 10 + div1;
            a = a / 10;
        }
        printf("%d", rev);
        if (rev == rev1)
        {
            printf("Given input is a palindrome number.\n");
        }
        else
        {
            printf("Given input is not a palindrome number.\n");
        }

        break;

    case 2:
        printf("Enter tha name:");
        char name[100];

        scanf("%s", &name);
        int n = strlen(name);
        for (int i = n; i >= 0; i--)
        {
            printf("%c", name[i]);
        }
        printf("\n");
        for (int i = n; i >= 0; i--)
        {
            if (i == 4)
            {
                printf("Index at 4 is %c", name[i]);
            }
        }

        break;

    case 3:
        printf("Enter the value of m:");
        int m;
        scanf("%d", &m);
        int *arr = (int *)malloc(m * sizeof(int));
        for (i = 0; i < m; i++)
        {
            scanf("%d", &arr[i]);
        }
        int count = 0;
        int count4 = 0;
        for (int i = 0; i < m; i++)
        {
            count4 = 0;
            for (int j = 1; j <= arr[i]; j++)
            {
                if (arr[i] % j == 0)
                {
                    count4++;
                }
            }
            if (count4 == 2)
            {
                count++;
            }
        }
        printf("%d", count);
        break;

    default:
        printf("Invalid input");
    }
}