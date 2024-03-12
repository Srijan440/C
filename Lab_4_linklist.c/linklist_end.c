#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};

struct node *push(int data1, struct node *head1)
{
    struct node *node1 = (struct node *)malloc(sizeof(struct node));
    node1->val=data1;
    node1->next=head1;
    head1=node1;
    return head1;
}

struct node *insert_end(int data2, struct node *head2)
{
    struct node *node2 = (struct node *)malloc(sizeof(struct node));
    node2->val=data2;
    node2->next=NULL;
    if(head2==NULL)
    {
    head2=node2;
    return head2;
    }
    struct node *ptr;
    ptr= head2;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=node2;
    return head2;
}

void printlinklist(struct node *head3)
{
    struct node *ptr2;
    ptr2=head3;
    while(ptr2!=NULL)
    {
        printf("%d\t",ptr2->val);
        ptr2=ptr2->next;
    }
}


int main()
{
    struct node *head=NULL;
    head= push(20,head);
    head= push(25,head);
    head= push(30,head);
    head= push(35,head);
    head= push(40,head);
    printlinklist(head);
    printf("\n");
    head=insert_end(45,head);
    printlinklist(head);
    return 0;
}
