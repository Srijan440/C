#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    printf("Enter tha name:");
    fgets(name, 100, stdin);               
    int n=strlen(name);
    puts(name);
    for(int i=n;i>=0;i--)
    {
        printf("%c",name[i]);
    }



}