#include <stdio.h>

int main()
{
    int a[10][10];
    int i,j;
    int row,column;
    printf("Enter the value of row: ");
    scanf("%d",&row);
    printf("Enter the value of column: ");
    scanf("%d",&column);
    printf("Enter the elements: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}