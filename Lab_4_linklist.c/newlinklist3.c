#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int val;
    struct node *next;
};
//global variable for head 

struct node *head=NULL;
void push(int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->val=data;
    newnode->next=head;
    //head->next=node;
    head=newnode;
    //return head;
}
void printlinklist(struct node *head)
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->val);
        ptr=ptr->next;
    }
}
void insert(int data)
{
struct node *ptr=(struct node*)malloc(sizeof(struct node));
ptr->val=data;
ptr->next=head;
head=ptr;
//return head;
}
int main()
    {
     printf("give me the number of nodes u want to be in the linklist");
     int n;
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
        int elem;
        scanf("%d",&elem);
        push(elem);
     }
     printlinklist(head);
     printf("\n");
     insert(56);
     printlinklist(head);


    }