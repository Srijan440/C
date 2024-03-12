// // // #include <stdio.h>
// // // #include <stdlib.h>

// // // struct node
// // // {
// // //     int value;
// // //     struct node *next;
// // //     struct node *previous;
// // // };

// // // struct node *doublelinklist(struct node *head,int data)
// // // {
// // //     struct node *newnode= (struct node *)malloc(sizeof(struct node));

// // //     newnode->value= data;
// // //     newnode->next= NULL;
// // //     newnode->previous= NULL;

// // //     if (head==NULL)
// // //     {
// // //         return newnode;
// // //     }

// // //     struct node *temp= head;
// // //     while (temp->next!=NULL)
// // //     {
// // //         temp= temp->next;
// // //     }
// // //     temp->next=newnode;
// // //     newnode->previous= temp;
// // //     return head;
// // // }

// // // void printlinklist(struct node *head)
// // // {
// // //     struct node * temp= head;
// // //     while(temp!=NULL)
// // //     {
// // //         printf("%d ",temp->value);
// // //         temp= temp->next;
// // //     }
// // // }

// // // int main()
// // // {
// // //     int n, data;
// // //     struct node *head= NULL;
// // //     printf("Enter the number of nodes: ");
// // //     scanf("%d",&n);
// // //     for (int i=0; i<n; i++)
// // //     {
// // //         printf("Enter the value of node %d: ",i);
// // //         scanf("%d",&data);
// // //         head= doublelinklist(head,data);
// // //     }
// // //     printlinklist(head);
// // // }

// // #include <stdio.h>
// // #include <stdlib.h>

// // struct node
// // {
// //     int value;
// //     struct node *next;
// //     struct node *previous;
// // };

// // struct node *doublelinklist(struct node *head, int data)
// // {
// //     struct node *newnode = (struct node *)malloc(sizeof(struct node));

// //     newnode->value = data;
// //     newnode->next = NULL;
// //     newnode->previous = NULL;

// //     if (head == NULL)
// //     {
// //         return newnode;
// //     }

// //     struct node *temp = head;
// //     while (temp->next != NULL)
// //     {
// //         temp = temp->next;
// //     }
// //     temp->next = newnode;
// //     newnode->previous = temp;
// //     return head;
// // }


// // struct node *delete(struct node *head, int position)
// // {
// // if (head==NULL)
// // {
// //     return NULL;
// // }
// // struct node *current= head;
// // struct node *previous= head;
// // int count=0;
// // while (current!= NULL && count <position)
// // {
// //     previous= current;
// //     current= current->next;
// //     count ++;
// // }
// // newnode->next = current;
// // current->previous
// // free(current);
// // return head;

// // }

// // void printlinklist(struct node *head)
// // {
// //     struct node *temp = head;
// //     while (temp != NULL)
// //     {
// //         printf("%d ", temp->value);
// //         temp = temp->next;
// //     }
// // }

// // int main()
// // {
// //     int n, data;
// //     struct node *head = NULL;
// //     printf("Enter the number of nodes: ");
// //     scanf("%d", &n);
// //     for (int i = 0; i < n; i++)
// //     {
// //         printf("Enter the value of node %d: ", i);
// //         scanf("%d", &data);
// //         head = doublelinklist(head, data);
// //     }

// //     printf ("Enter the position for deletion: ");
// //     int position;
// //     sacnf("%d",&position);
// //     head = delete(head,position);
// //     printf("After deleting the required printlinklist are:");
// //     printlinklist(head);
// // }






// // #include <stdio.h>
// // #include <stdlib.h>

// // struct node
// // {
// //     int value;
// //     struct node *next;
// //     struct node *previous;
// // };

// // struct node *doublelinklist(struct node *head, int data)
// // {
// //     struct node *newnode = (struct node *)malloc(sizeof(struct node));

// //     newnode->value = data;
// //     newnode->next = NULL;
// //     newnode->previous = NULL;

// //     if (head == NULL)
// //     {
// //         return newnode;
// //     }

// //     struct node *temp = head;
// //     while (temp->next != NULL)
// //     {
// //         temp = temp->next;
// //     }
// //     temp->next = newnode;
// //     newnode->previous = temp;
// //     return head;
// // }
// // struct node *insert(struct node *head, int data, int position)
// // {
// //     struct node *new1 = (struct node *)malloc(sizeof(struct node));

// //     new1->value = data;

// //     if (position == 0)
// //     {
// //         new1->next = head;
// //         new1->previous = NULL;
// //         head->previous = new1;
// //         return new1;
// //     }

// //     int count = 0;
// //     struct node *current = head;
// //     struct node *previous = head;
// //     while (current != NULL && count < position - 1)
// //     {
// //         previous= current;
// //         current = current->next;
// //         count++;
// //     }
// //     previous ->next= current->next;
// //     current->next->previous= previous;
// //     free (current);
// // return head;
// // }

// // void printlinklist(struct node *head)
// // {
// //     struct node *temp = head;
// //     while (temp != NULL)
// //     {
// //         printf("%d ", temp->value);
// //         temp = temp->next;
// //     }
// // }

// // int main()
// // {
// //     int n, data;
// //     struct node *head = NULL;
// //     printf("Enter the number of nodes: ");
// //     scanf("%d", &n);
// //     for (int i = 0; i < n; i++)
// //     {
// //         printf("Enter the value of node %d: ", i);
// //         scanf("%d", &data);
// //         head = doublelinklist(head, data);
// //     }
// //     printf("Before deletion required printlinklist are:");
// //     printlinklist(head);
// //     printf("\n");
// //     printf("Enter the position: ");
// //     int position;
// //     scanf("%d", &position);
// //     head = insert(head, data, position);
// //     printf("After deletion required printlinklist are:");
// //     printlinklist(head);
// // }




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
//     struct node *new1=(struct node *)malloc(sizeof(struct node));
    
//     new1->value= data;
//     new1->next= NULL;
//     new1->previous= NULL;

//     if (head==NULL)
//     {
//         return new1;
//     }
//     struct node *temp= head;
//     while (temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=new1;
//     new1->previous = temp;
//     return head;
// }

// void printlinklist(struct node *head)
// {
//     struct node *current= head;
//     while (current!=NULL)
//     {
//         printf("%d ",current->value);
//         current= current->next;
//     }
// }

// struct node *deleteatbeginning(struct node *head)
// {
//     struct node *temp=head;
//     head= head->next;
//     free(temp);
//     return head;
// }


// struct node *deleteatend(struct node *head)
// {
//     struct node *current=head;
//     struct node *previous=head;

//     while (current->next!=NULL)
//     {
//         previous=current;
//         current= current->next;
//     }
//     previous->next=NULL;
//     free(current);
//     return head;
// }

// struct node *deleteatanypoint(struct node *head,int position,int j)
// {

//     struct node *current=head;
//     struct node *previous=head;

//     if (position==0)
//     {
//         head=head->next;
//         free(current);
//         return head;
//     }

//     if (position==j)
//     {
//         while(current->next!=NULL)
//         {
//             previous=current;
//             current= current->next;
//         }
//         previous->next= NULL;
//         free(current);
//         return head;
//     }

//     int count=0;
//     while (current!=NULL && count<position)
//     {
//         previous=current;
//         current= current->next;
//         count ++;
//     }
//     previous->next=current->next;
//     current->next->previous = previous;
//     free(current);
//     return head;
// }


// int main ()
// {

//     struct node *head= NULL;
//     int n, data;
//     printf("Enter the number of node to create the linklist: ");
//     scanf("%d",&n);
//     int j=n-1;
//     for (int i=0; i<n ; i++)
//     {
//         printf("Enter the data of node %d: ",i);
//         scanf("%d",&data);
//         head= linklist(head,data);
//     }
//     printf("The given linklist are: ");
//     printf("\n");
//     printlinklist(head);
//     printf("\n");

//     printf("  Menu  \n");
//     printf("1. Deletion at the beginning point.  \n");
//     printf("2. Deletion at the end point.  \n");
//     printf("3. Deletion at any point.  \n");

//     int choice;
//     printf("Enter the choice: ");
//     scanf("%d",&choice);

//     switch (choice)
//     {
//         case 1:
//         head= deleteatbeginning(head);
//     printf("After deletion the linklist are: ");
//     printf("\n");
//     printlinklist(head);
//     break;

//         case 2:
//         head= deleteatend(head);
//         printf("After deletion the linklist are: ");
//         printf("\n");
//         printlinklist(head);
//         break;

//         case 3:
//         printf("Enter the position: ");
//         int position;
//         scanf("%d",&position);
//         head= deleteatanypoint(head,position,j);
//         printf("After deletion the linklist are: ");
//         printf("\n");
//         printlinklist(head);
//         break;

//         default :
//         printf("Invalid option:");
//         break;
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

struct node *doublelinklist(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->value= data;
    newnode->next= NULL;
    newnode->previous=NULL;

    if(head==NULL)
    {
        return newnode;
    }

    struct node *temp= head;
    while(temp->next!=NULL)
    {
        temp= temp->next;
    }
    temp->next= newnode;
    newnode->previous = temp;
    return head;
}

struct node *reverse(struct node *head)
{
    struct node *current= head;
    struct node *temp = NULL;

    while(current!=NULL)
    {
        temp = current->previous;
        current->previous = current->next;
        current->next = temp;
        current = current->previous; 
    } 
    head= temp->previous;
}

void printlinklist(struct node *head)
{
    struct node *temp= head;
    while (temp!=NULL)
    {
        printf("%d ",temp->value);
        temp= temp->next;
    }
}

int main()
{
    int n,data;
    struct node *head= NULL;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        printf("Enter the data for node %d: ",i);
        scanf("%d",&data);
        head= doublelinklist(head,data);
    }
    printf("The linklist are: ");
    printlinklist(head);
    head= reverse(head);
    printf("The reverse linklist are: ");
    printlinklist(head);
}