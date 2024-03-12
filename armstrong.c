#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    int power = 0;
    int copy = num;
    while (copy != 0)
    {
        power++;
        copy = copy / 10;
    }
    printf("Its power : %d",power);
    printf("\n");
    // int c, p;
    double sum = 0;                                                //armstrong
    int copy2 = num;
    while (num != 0)
    {
        int div = num % 10;
        sum = sum + pow(div, power);
        // sum = sum + p;
        num = num / 10;
    }
printf("%.f",sum);
    if (sum == copy2)
    {
        printf(" It is a armstrong number.");
    }
}