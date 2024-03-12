// #include <stdio.h>
// #include<stdlib.h>

// struct n1
// {
//     struct n1 *prev;
//     int data;
//     struct n1 *next;
    
// };

// int main()
// {
//     struct n1 *head, *p, *r, *s;

//     int n;

//     printf("Enter no. of nodes for doubly linked lists: ");
//     scanf("%d",&n);

//     p = (struct n1 *)malloc(sizeof(struct n1));

//     p->prev = NULL;

//     printf("Enter data for 1 node: ");
//     scanf("%d", &p->data);

//     p->next = NULL;

//     head = p;
    
//     int i=1;

//     while(i<n)
//     {
//         struct n1 *q;
//         q = (struct n1 *)malloc(sizeof(struct n1));
//         printf("Enter data for %d node: ", i + 1);
//         scanf("%d",&q->data);
//         p->next = q;
//         q->prev = p;
//         q->next = NULL;

//         p = p->next;
//         i++;
//     }

//     r = head;

//     printf("Given source doubly linked lists: \n");
    
//     while(r != NULL)
//     {
//         printf("%d ",r->data);
//         r = r->next;
//     }

//     s=p;

//     printf("\nReversed doubly linked lists: \n");

//     while(s != NULL)
//     {
//        printf("%d ",s->data);
//        s=s->prev;
//     }
// }



#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
    struct node *previous;
};

struct node *linklist(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *current = head;

    newnode->value = data;
    newnode->next = NULL;
    newnode->previous = NULL;

    if (head == NULL)
    {
        return newnode;
    }

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newnode;
    newnode->previous = current;

    return head;
}

void printlinklist(struct node *head)
{
    struct node *current = head;
    while (current != NULL)
    {
        printf("%d ", current->value);
        current = current->next;
    }
}

struct node *insertanyposition(struct node *head, int data, int position, int n)
{
    struct node *new1 = (struct node *)malloc(sizeof(struct node));

    new1->value = data;
    new1->previous = NULL;
    struct node *temp = head;

    if (temp == NULL)
    {
        return new1;
    }

    if (position == 0)
    {
        new1->next = head;
        head->previous = new1;
        return new1;
    }

    int count = 0;
    while (temp != NULL && count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    new1->next = temp->next;
    temp->next->previous= new1;
    temp->next = new1;
    new1->previous = temp;
    return head;

}

struct node *atlast(struct node *head, int data, int position ,int n)
{
    struct node *newnode= (struct node *)malloc(sizeof(struct node));

    newnode ->value= data;
     newnode->next= NULL;

    struct node *temp= head;

        while (temp->next !=NULL)
        {
        temp= temp->next;
        }
        temp->next= newnode;
        newnode->previous = temp;
        newnode->next= NULL;
        return head;
    
}

int main()
{
    int n, data;
    struct node *head = NULL;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);
        head = linklist(head, data);
    }
    printf("The linklist is : ");
    printlinklist(head);

    printf("\n");

    printf("Enter the position to insert the new node: ");
    int position;
    scanf("%d", &position);
    if (position < 0 || position > n)
    {
    printf("Invalid position.\n");
    }

    if (position<n)
    {
    printf("Enter the value: ");
    scanf("%d", &data);
    head = insertanyposition(head, data, position,n);
    printf("The new linklist is : ");
    printlinklist(head);
    }

    if (position == n)
    {
    printf("Enter the value: ");
    scanf("%d", &data);
    head= atlast(head,data,position,n);
    printf("The new linklist is : ");
    printlinklist(head);
    }
}