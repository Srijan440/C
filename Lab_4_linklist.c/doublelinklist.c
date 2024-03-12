// // inserting at any position.

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int value;
//     struct node *next;
//     struct node *previous;
// };

// struct node *linklist(struct node *head, int data)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     struct node *current = head;

//     newnode->value = data;
//     newnode->next = NULL;
//     newnode->previous = NULL;

//     if (head == NULL)
//     {
//         return newnode;
//     }

//     while (current->next != NULL)
//     {
//         current = current->next;
//     }

//     current->next = newnode;
//     newnode->previous = current;

//     return head;
// }

// void printlinklist(struct node *head)
// {
//     struct node *current = head;
//     while (current != NULL)
//     {
//         printf("%d ", current->value);
//         current = current->next;
//     }
// }

// struct node *insertanyposition(struct node *head, int data, int position, int n)
// {
//     struct node *new1 = (struct node *)malloc(sizeof(struct node));

//     new1->value = data;
//     new1->previous = NULL;
//     struct node *temp = head;

//     if (temp == NULL)
//     {
//         return new1;
//     }

//     if (position == 0)
//     {
//         new1->next = head;
//         head->previous = new1;
//         return new1;
//     }

//     int count = 0;
//     while (temp != NULL && count < position - 1)
//     {
//         temp = temp->next;
//         count++;
//     }
//     new1->next = temp->next;
//     temp->next->previous= new1;
//     temp->next = new1;
//     new1->previous = temp;
//     return head;

// }

// struct node *atlast(struct node *head, int data, int position ,int n)
// {
//     struct node *newnode= (struct node *)malloc(sizeof(struct node));

//     newnode ->value= data;
//      newnode->next= NULL;
//      newnode->previous= NULL;

//     struct node *temp= head;

//         while (temp->next !=NULL)
//         {
//         temp= temp->next;
//         }
//         temp->next= newnode;
//         newnode->next= NULL;
//         return head;

// }

// int main()
// {
//     int n, data;
//     struct node *head = NULL;
//     printf("Enter the number of nodes: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the data of node %d: ", i);
//         scanf("%d", &data);
//         head = linklist(head, data);
//     }
//     printf("The linklist is : ");
//     printlinklist(head);

//     printf("\n");

//     printf("Enter the position to insert the new node: ");
//     int position;
//     scanf("%d", &position);
//     if (position < 0 || position > n)
//     {
//     printf("Invalid position.\n");
//     }

//     if (position<n)
//     {
//     printf("Enter the value: ");
//     scanf("%d", &data);
//     head = insertanyposition(head, data, position,n);
//     printf("The new linklist is : ");
//     printlinklist(head);
//     }

//     if (position == n)
//     {
//     printf("Enter the value: ");
//     scanf("%d", &data);
//     head= atlast(head,data,position,n);
//     printf("The new linklist is : ");
//     printlinklist(head);
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int value;
//     struct node *next;
//     struct node *previous;
// };

// struct node *linklist( struct node *head, int data)
// {
//     struct node *newnode= (struct node *)malloc(sizeof(struct node));

//     newnode->value= data;
//     newnode->next= NULL;
//     newnode->previous= NULL;

//     if(head == NULL)
//     {
//         return newnode;
//     }

//     struct node *temp= head;
//     while(temp->next!=NULL)
//     {
//         temp= temp->next;
//     }
//     temp->next= newnode;
//     newnode->previous= temp;
//     return head;
// }

// void printlinklist(struct node *head)
// {
//     struct node *current= head;
//     while(current != NULL)
//     {
//         printf("%d ",current->value);
//         current= current->next;
//     }
// }

// struct node *deletionanyposition(struct node *head,int position,int n)
// {
//     struct node *current= head;
//     struct node *back= head;

//     if (position == 0)
//     {
//         head= head->next;
//         free(current);
//         return head;
//     }

//     if(position < (n-1))
//     {

//         int count=0;
//         while (current!= NULL && count < position)
//         {
//             back = current;
//             current= current->next;
//             count ++;
//         }
//         back->next = current->next;
//         current->next->previous= back;
//         free(current);
//         return head;
//     }

//     if(position == (n-1))
//     {
//         while (current->next != NULL)
//     {
//     back= current;
//     current= current->next;
//     }
//     back->next=NULL;
//     free(current);
//     return head;
//     }
// }

// int main()
// {
//     struct node *head= NULL;
//     int n,data;
//     printf("Enter the value of number of nodes: ");
//     scanf("%d",&n);
//     for (int i=0; i<n; i++)
//     {
//         printf("Enter the value of node %d :",i);
//         scanf("%d",&data);
//         head= linklist(head,data);
//     }
//     printf("The linklist are: ");
//     printlinklist(head);

//     printf("\n");

//     int position;
//     printf("Enter the position: ");
//     scanf("%d",&position);

//     head = deletionanyposition(head,position,n);
//     printf("The given linklist are: ");
//     printlinklist(head);

// }

// reversedoublelinklist;

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
    struct node *newnode= (struct node *)malloc(sizeof(struct node));

    newnode->value= data;
    newnode->next= NULL;
    newnode->previous= NULL;

    if(head== NULL)
    {
        return newnode;
    }

    struct node *current= head;
    while(current->next!=NULL)
    {
        current= current->next;
    }
    current->next = newnode;
    newnode->previous= current;
    return head;
}

void printlinklist(struct node *head)
{
    struct node *temp= head;
    while(temp!= NULL)
    {
        printf("%d ",temp->value);
        temp=temp->next;
    }
}

struct node *reverse(struct node *head)
{
    struct node *current=head;
    struct node *back= NULL;
    struct node *
    while(current!=NULL)
    {
    //     back= current->previous;
    //     current->previous= current->next;
    //     current->next = back;
    //     current = current->previous;
    // }
    // head = back->previous;
    next = current->next;
    current->next = previous;
}

int main()
{
    struct node *head= NULL;
    int n, data;
    printf("Enter the number of nodes :");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("Enter the data of node %d: ",i);
        scanf("%d", &data);
        head= linklist(head,data);
    }

    printf("The linklist are:");
    printlinklist(head);

printf("\n");

    head= reverse(head);
    printf("Reverse linklist are: ");
    printlinklist(head);
}

// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int val;
//     struct node *next;
// };
// struct node *push(struct node *head, int data)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->val = data;
//     newnode->next = NULL;
//     if (head == NULL)
//     {
//         return newnode;
//     }

//         struct node *current = head;
//         while (current->next != NULL)
//         {
//             current = current->next;
//         }
//         current->next = newnode;
//         return head;

// }
// int listlength(struct node *head)
// {
//     int count = 0;
//     struct node *p = head;
//     while (p != NULL)
//     {
//         count ++;
//         p = p->next;
//     }
//     return count;
// }
// struct node *insert_at_pos(struct node *head, int data, int pos)
// {
//     struct node *new_node = malloc(sizeof(struct node));
//     new_node->val = data;
//     new_node->next = NULL;
//     if (pos < 0 || pos > listlength(head))
//     {
//         printf("Invalid position: %d/n", pos);
//     }
//     if (pos == 0)
//     {
//         new_node->next = head;
//         return new_node;
//     }
//     else
//     {
//         struct node *p = head;
//         for (int i = 1; i < pos - 1; i++)
//         {
//             p = p->next;
//         }
//         new_node->next = p->next;
//         p->next = new_node;
//     }
//     return head;
// }
// void printll(struct node *headcopy)
// {
//     struct node *p = headcopy;
//     while (p != NULL)
//     {
//         printf("%d ", p->val);
//         p = p->next;
//     }
// }
// int main()
// {
//     int n, data, pos;
//     struct node *head = NULL;
//     printf("Enter the number of nodes: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the value of node %d ", i);
//         scanf("%d", &data);
//         head = push(head, data);
//     }
//     printll(head);
//     printf("\n");
//     printf("Enter the value to insert: ");
//     scanf("%d", &data);
//     printf("Enter the postiton to insert: ");
//     scanf("%d", &pos);
//     head = insert_at_pos(head, data, pos);
//     printll(head);
//     return 0;
// }




// deletion any node in singlelinklist.



// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int value;
//     struct node *next;
// };

// struct node *linklist(struct node *head, int data)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));

//     newnode->value = data;
//     newnode->next = NULL;

//     if (head == NULL)
//     {
//         return newnode;
//     }

//     struct node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = newnode;
//     return head;
// }

// struct node *deleteanynode(struct node *head, int position, int n)
// {
//     if (head == NULL)
//     {
//         printf("The null is already empty.");
//     }

//     if (position == 0)
//     {
//         struct node *temp = head;
//         head = head->next;
//         free(temp);
//         return head;
//     }

//     if (position < n)
//     {
//         struct node *current = head;
//         struct node *previous = head;
//         int count = 0;
//         while (current != NULL && count < position)
//         {
//             previous = current;
//             current = current->next;
//             count++;
//         }

//         previous->next = current->next;
//         free(current);
//         return head;
//     }
// }

// void printlinklist(struct node *head)
// {
//     struct node *current = head;
//     while (current != NULL)
//     {
//         printf("%d ", current->value);
//         current = current->next;
//     }
// }

// int main()
// {
//     struct node *head = NULL;
//     int n, data;
//     printf("Enter the number of node: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the data of node %d: ", i);
//         scanf("%d", &data);
//         head = linklist(head, data);
//     }

//     printf("The linklist are: ");
//     printlinklist(head);

//     printf("\n");
//     printf("Enter the position which you want to delete: ");
//     int position;
//     scanf("%d", &position);
//     head = deleteanynode(head, position, n);
//     printlinklist(head);
//     return 0;
// }