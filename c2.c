#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);int fact=1;
    int i=1;
    do// while(i<=n)
    {
       fact=fact*i; //printf("%d ",i);
        i++;
    }
        while(i<=n);
printf("%d",fact);
//     int count;
// for(int i=1;i<n;i++)
// {
//      count =6;
// }
// printf("%d",count);

}
