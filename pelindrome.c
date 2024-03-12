#include <stdio.h>

int main(){
    
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    printf("\n");
    int copy=num;
    int div;
    int rev=0;
    while(copy!=0)
    {
        div=copy%10;
        rev=rev*10 +div;
        copy=copy/10;
    }
    if(rev==num)
    {
        printf("Given number is pelindrome:");
    }
    else
    {
        printf("It is not a pelindrome number.");
    }
}