#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int value;
    struct node *next;
};


struct node *linklist(struct node *head,int data)
{
    struct node *newnode= (struct node *)malloc(sizeof(struct node));
    newnode->value= data;
    newnode->next=NULL;

    if(head==NULL)
    {
        newnode->next= newnode;
        return newnode;
    }

    struct node *temp= head;
    
    while (temp->next!= head)
    {
        temp= temp->next;
    } 
    
    

}

int main()
{
    struct node *head=NULL;
    int n,data;
    printf("Enter tha number of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n; i++)
    {
        printf("Enter the value node %d: ",i);
        scanf("%d",&data);
        head= linklist(head,data);
    }

    printf("The linklist are: ");
    printlinklist(head);
}