#include <stdio.h>
#include <math.h>
int main()
{
    int side;
    printf("Enter the value of side of square\n");
    scanf("%d",&side);
    int area = pow(side,2) ;
    printf("Area will be %d",area);
    return 0;


}