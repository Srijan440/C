#include<stdio.h>
void drawrectangle(int point)
{
    //int count=0;
    int i,j;
    for(i=0;i<=point;i++)
    {
        for(j=0;j<=point-1;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

}
void drawrighttriangle(int point)
{

    int i,j;
    printf("\n");
    for(i=0;i<=point;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

}
int main ()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    drawrectangle(num);
    drawrighttriangle(num);
}