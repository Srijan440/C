#include <stdio.h>
#include<stdbool.h>

void insert(int arr[], int n, int posi, int data)
{
    for (int i = n; i >= posi; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[posi - 1] = data;
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}

void delete(int arr[],int n,int posi){
    for(int i=posi-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }

     for (int i = 0; i < n-1; i++)
    {
        printf("%d", arr[i]);
    }
}

void search(int arr[],int n,int data){
    bool flag = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==data){
            flag = 1;
            break;
        }}
        if(flag==1){
            printf("Element found ");
        }
        else
           printf("Element was not found");
    }
    


int main()
{
    int n, m;
    printf("Enter the number of elements in an array");
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the next element\n");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    
    while(m!=5){
    printf("\n press 1 for insert\n press 2 for delete\n press 3 for linear search\n press 4 traverse\n press 5 for exit\n");
    scanf("%d", &m);
    
    if (m == 1)
    {
        int data, posi;
        printf("Enter the data and posi to be inserted");
        scanf("%d%d", &data, &posi);
        insert(arr, n + 1, posi, data);
        n++;
    }

    if(m == 2){
        int posi;
        printf("Enter the posi to be deleted");
        scanf("%d",&posi);
        delete(arr,n,posi);
        n--;
    }

    if(m == 3){
        int data;
        printf("Enter the data to be found");
        scanf("%d",&data);
        search(arr,n,data);

    }

    if(m==4){
        for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    }

    if(m==5){
        return 0;
    }}
}