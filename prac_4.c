#include <stdio.h>

int main(){
    int length ,breadth;
    printf("Enter the value of length and breadth:");
    scanf("%d %d",&length,&breadth);
    int area= length*breadth;
    printf ("The area of the rectangle is:%d",area);
    return 0;
}