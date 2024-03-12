#include <stdio.h>

int main(){
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