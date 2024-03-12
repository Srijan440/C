//recursion for fibbonaci.

#include <stdio.h>
int fibo(int p)
{
    if(p==1)
    return 1;
    if(p==0)
    return 0;
    else
    {
        return fibo(p-1)+fibo(p-2);
    }

}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        printf("%d ,",fibo(i));
    }
    
}