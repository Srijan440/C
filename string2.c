#include <stdio.h>
#include<string.h>

int main()
{
    char name[100];
    printf("Enter the name which you want to print:\n");
    fgets(name, 100, stdin);
    puts(name);
    printf("%c",name[5]);
    return 0;
}