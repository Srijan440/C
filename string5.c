#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    printf("Enter tha name:");
    fgets(name, 100, stdin);
    int n=strlen(name);
    //puts(name);
    for(int i=0;i<=n;i++)
    {
        if (name[i]==' ')
        printf ("\n");
        else
        printf("%c",name[i]);
    }



}