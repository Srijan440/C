// second largest find in linklist..

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int value;
//     struct node *next;
// };

// struct node *createnode(int data)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     if (newnode == NULL)
//     {
//         exit(1);
//     }
//     newnode->value = data;
//     newnode->next = NULL;
//     return newnode;
// }

// struct node *sorted(struct node *head, int data)
// {
//     struct node *newnode = createnode(data);
//     if (head == NULL || data < head->value)
//     {
//         newnode->next = head;
//         return newnode;
//     }
//     else
//     {
//         struct node *current = head;
//         while (current->next != NULL && data > current->next->value)
//         {
//             current = current->next;
//         }
//         newnode->next = current->next;
//         current->next = newnode;
//         return head;
//     }
// }

// void printlinklist(struct node *head)
// {
//     struct node *temp = head;
//     while (temp != NULL)
//     {
//         printf("%d -> ", temp->value);
//         temp = temp->next;
//     }
// }

// void printsecondlargest(struct node *head)
// {
//     struct node *current = head;
//     while (current->next ->next != NULL)
//     {
//         current = current-> next;
//     }
//     printf("%d",current->value);
// }

// int main()
// {
//     int n, data;
//     struct node *head = NULL;
//     printf("Enter the number of node: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the data of node %d:", i);
//         scanf("%d", &data);
//         head = sorted(head, data);
//     }
//     printf("\nSorted linklist are:");
//     printlinklist(head);
//     printf("\n");
//     printf("The second largest number in the linklist are: ");
//     printsecondlargest(head);
// }

// #include <stdio.h>

// void swap(int *m, int *n)
// {
//     int temp;
//     temp = *m;
//     *m = *n;
//     *n = temp;
// }

// void print(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
// }

// int main()
// {
//     int min, n;

//     printf("Enter size of array: ");
//     scanf("%d", &n);

//     int a[n];

//     printf("Enter elements: ");

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("\nGiven array elements:\n");
//     print(a, n);

//     for (int i = 0; i < n - 1; i++)
//     {
//         min = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[min] > a[j])
//                 min = j;

//             if (min != i)
//                 swap(&a[min], &a[i]);
//         }
//     }

//     printf("\nSorted array elements:\n");
//     print(a, n);
// }

// maximum and minimum.......................................................................................................

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int value;
//     struct node *next;
// };

// struct node *create(struct node *head, int data)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->value = data;
//     newnode->next = NULL;

//     if (head == NULL || data < head->value)
//     {
//         newnode->next = head;
//         return newnode;
//     }

//     else
//     {
//         struct node *current = head;
//         while (current->next != NULL && data > current->next->value)
//         {
//             current = current->next;
//         }
//         newnode->next = current->next;
//         current->next = newnode;
//         return head;
//     }
// }

// int Maximum (struct node *head)
// {
//     struct node *current = head;
//     while (current -> next -> next != NULL)
//     {
//         current = current -> next;
//     }
//     int c = current ->value;
//     return c;
// }

// int minimum (struct node *head)
// {
//     int z = head-> value;
//     return z;
// }

// void printlinklist(struct node *head)
// {
//     struct node *current = head;
//     while (current!= NULL)
//     {
//         printf("%d ", current->value);
//         current = current->next;
//     }
// }

// int main()
// {
//     int n, data;
//     struct node *head= NULL;
//     printf("Enter the elements: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the data of %d: ", i);
//         scanf("%d", &data);
//         head = create(head, data);
//     }
//     printf("The linklist is: ");
//     printlinklist(head);

//     printf("\n");

//     printf("Maximum number:");
//     int a = Maximum(head);
//     printf("%d",a);

//     printf("\nMinimum number:");
//     int g = minimum(head);
//     printf("%d",g);
//     return 0;
// }

////reverse single linklist.......................................................................................

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int value;
//     struct node *next;
// };

// struct node *reverse(struct node *head, int data)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     newnode-> value = data;
//     newnode -> next = head;
//     head = newnode;
//     return head;
// }

// void printlinklist(struct node *head)
// {
//     struct node *current = head;
//     while (current!= NULL)
//     {
//         printf("%d ",current -> value);
//         current = current-> next;
//     }
// }

// int main()
// {
//     struct node *head = NULL;
//     int n, data;
//     printf("Enter the number of nodes: ");
//     scanf("%d",&n);
//     for (int i=0; i<n ; i++)
//     {
//         printf("Enter the value of node %d: ",i);
//         scanf("%d",&data);
//         head = reverse(head,data);
//     }
//     printf("\n");
//     printf("the reverse linklist is:");
//     printlinklist(head);
//     return 0;
// }

// inserting doubly linklist....................................................................................

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int value;
//     struct node *next;
//     struct node *previous;
// };

// struct node *doublelinklist(struct node *head, int data)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->value = data;
//     newnode->next = NULL;
//     newnode->previous = NULL;

//     if (head == NULL)
//     {
//         return newnode;
//     }
//     else
//     {
//         struct node *current = head;
//         while (current->next != NULL)
//         {
//             current = current->next;
//         }
//         current -> next = newnode;
//         newnode-> previous = current;
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

// struct node *insert(struct node *head,int data, int position, int n)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     newnode-> value = data;
//     newnode-> next = NULL;
//     newnode-> previous = NULL;
//     struct node *current = head;

//     if (head == NULL)
//     {
//         return newnode;
//     }

//     else if(position == 0)
//     {
//         newnode -> next = head;
//         head-> previous =  newnode;
//         return newnode;
//     }

//     else
//         {
//         int count = 0;

//         while (current != NULL && count < position - 1)
//         {
//             current = current-> next;
//             count ++;
//         }

//         if(position == n)
//         {
//             newnode -> next = current -> next;
//             current ->next = newnode;
//             newnode-> previous = current;
//             return head;
//         }

//         newnode-> next = current-> next;
//         current-> next -> previous = newnode;
//         current-> next = newnode;
//         newnode -> previous = current;
//         return head;
//         }
// }

// int main()
// {
//     struct node *head = NULL;
//     int n, data,position;
//     printf("Enter the number of nodes: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the value of node %d: ", i);
//         scanf("%d", &data);
//         head = doublelinklist(head, data);
//     }
//     printf("\n");
//     printf("Your Doubly linklist is:");
//     printlinklist(head);

//     printf("\nEnter the position:");
//     scanf("%d",&position);

//     if(position <= n)
//     {
//         printf("Enter the data: ");
//         scanf("%d",&data);
//         head = insert(head,data, position,n);
//         printf("After insertion:");
//         printlinklist(head);
//     }
//     else
//     {
//         printf("\nInvalid Position.");
//     }
//     return 0;
// }


// deletion double linklist at any position...............................................................................


// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int value;
//     struct node *next;
//     struct node *previous;
// };

// struct node *doublelinklist(struct node *head, int data)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->value = data;
//     newnode->next = NULL;
//     newnode->previous = NULL;

//     if (head == NULL)
//     {
//         return newnode;
//     }
//     else
//     {
//         struct node *current = head;
//         while (current->next != NULL)
//         {
//             current = current->next;
//         }
//         current->next = newnode;
//         newnode->previous = current;
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

// struct node *deletion(struct node *head, int position, int n)
// {
//     struct node *current = head;
//     struct node *prev;

//     if (position == 1)
//     {
//         current = current->next;
//         free(head);
//         return (current);
//     }

//     else
//     {
//         int count = 1;

//         while (current != NULL && count < position)
//         {
//             prev = current;
//             current = current->next;
//             count++;
//         }

//         if (position == n)
//         {
//             prev->next = current->next;
//             free(current);
//             return head;
//         }

//         prev->next = current->next;
//         current->next->previous = prev;
//         free(current);
//         return head;
//     }
// }

// int main()
// {
//     struct node *head = NULL;
//     int n, data, position;
//     printf("Enter the number of nodes: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the value of node %d: ", i);
//         scanf("%d", &data);
//         head = doublelinklist(head, data);
//     }
//     printf("\n");
//     printf("Your Doubly linklist is:");
//     printlinklist(head);

//     printf("\nEnter the position:");
//     scanf("%d", &position);

//     if (position <= n && position > 0)
//     {
//         head = deletion(head, position, n);
//         printf("After insertion:");
//         printlinklist(head);
//     }
//     else
//     {
//         printf("\nInvalid Position.");
//     }
//     return 0;
// }


//////reverse doubly linklist..................................................................................
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int value;
//     struct node *next;
//     struct node *previous;
// };

// struct node *doublelinklist(struct node *head, int data)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     newnode -> value = data;
//     newnode-> previous = NULL;

//     if( head == NULL)
//     {
//         newnode-> next = head;
//         head = newnode;
//         return head;
//     }
//     else
//     {
//     newnode-> next = head;
//     head -> previous = newnode;
//     head = newnode;
//     return head;
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
//     int n, data,position;
//     printf("Enter the number of nodes: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the value of node %d: ", i);
//         scanf("%d", &data);
//         head = doublelinklist(head, data);
//     }
//     printf("\n");
//     printf("Your Reversed Doubly linklist is:");
//     printlinklist(head);
// }