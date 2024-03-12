// // // code by using array


// #include <stdio.h>

// int top = -1;
// int a[100];

// void push()
// {
//     int n;
//     if (top == 99)
//     {
//         printf("Overflow!\n");
//     }
//     else
//     {
//         printf("Enter the element: ");
//         scanf("%d", &n);
//         top = top + 1;
//         a[top] = n;
//         printf("Element inserted!\n");
//     }
// }

// void pop()
// {
//     if (top == -1)
//     {
//         printf("Underflow!\n");
//     }
//     else
//     {
//         top = top - 1;
//         printf("\nElement deleted!\n");
//     }
// }

// void show()
// {
//     if (top == -1)
//     {
//         printf("\nUnderflow!\n");
//     }
//     else
//     {
//         printf("\nStacked elements: \n");
//         for (int i = top; i >= 0; i--)
//             printf("%d\n", a[i]);
//     }
// }

// int main()
// {
//     int n;

//     int i = 0;
//     while (i != 6)
//     {
//         printf("\n**MENU**\n");
//         printf("1. PUSH\n");
//         printf("2. POP\n");
//         printf("3. IsEmpty\n");
//         printf("4. IsFull\n");
//         printf("5. SHOW\n");
//         printf("6. EXIT\n");
//         printf("Enter choice: ");
//         scanf("%d", &n);

//         if (n == 1)
//             push();

//         else if (n == 2)
//             pop();

//         else if (n == 3)
//         {
//           if(top == -1)
//           {
//             printf("\nStack is EMPTY!\n");
//           }
//           else
//           {
//             printf("\nStack is NOT EMPTY!\n");
//           }
//         }

//         else if (n == 4)
//         {
//           if(top == 99)
//           {
//             printf("\nStack is FULL!\n");
//           } 
//           else
//           {
//             printf("\nStack is NOT FULL!\n");
//           }
//         }

//         else if (n == 5)
//             show();

//         else if (n == 6)
//             i = 6;

//         else
//             printf("Invalid Input. Try again!\n");
//     }
// }



// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int value;
//     struct node *next;
// };

// struct node *top = NULL;

// void push(int data) 
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     if (newnode == NULL) 
//     {
//         return;
//     }
//     newnode->value = data;
//     newnode->next = top;
//     top = newnode;
//     printf("Inserted.\n");
// }

// void seek() 
// {
//     if (top == NULL) 
//     {
//         printf("Underflow.\n");
//     } 
//     else 
//     {
//         printf("Top value: %d\n", top->value);
//     }
// }

// void display() 
// {
//     if (top == NULL) 
//     {
//         printf("Empty Stack.\n");
//         return;
//     }

//     struct node *temp = top;
//     printf("Stack elements: ");
//     while (temp != NULL) 
//     {
//         printf("%d ", temp->value);
//         temp = temp->next;
//     }
//     printf("\n");
// }

// void pop() 
// {
//     if (top == NULL) 
//     {
//         printf("Underflow.\n");
//         return;
//     }

//     struct node *temp = top;
//     printf("Popped value: %d\n", temp->value);
//     top = top->next;
//     free(temp);
// }

// int main() {
//     int n, data;
//     int i = 0;
//     while (i != 6) {
//         printf("\n**MENU**\n");
//         printf("1. PUSH\n");
//         printf("2. POP\n");
//         printf("3. IsEmpty\n");
//         printf("4. Display\n");
//         printf("5. Seek\n");
//         printf("6. EXIT\n");
//         printf("Enter Choice: ");
//         scanf("%d", &n);

//             if (n == 1)
//             {
//                 printf("Enter the data: ");
//                 scanf("%d", &data);
//                 push(data);
//             }
//             if (n == 2)
//             {
//                 pop();
//             }

//             if(n == 3)
//             {
//                 if (top == NULL) {
//                     printf("\nStack is Empty!\n");
//                 } else {
//                     printf("\nStack is not Empty!\n");
//                 }
//             }
//             if (n == 4)
//             {
//                 display();
//             }
            
//             if (n == 5)
//             {
//                 seek();
//             }
            
//             if (n >= 6)
//             {
//                 i = 6;
//             }
//     }
// }



// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };

// struct node* new_node(int x) 
// {
//   struct node *node;
//   node = malloc(sizeof(struct node));
//   node->data = x;
//   node->left = NULL;
//   node->right = NULL;
// }

// struct node* insert(struct node *root, int data)
// {
//     if(root == NULL)
//       return new_node(data);
    
//     else if(data > root->data)
//         root->right = insert(root->right, data);
    
//     else
//         root->left = insert(root->left, data);

//     return root;
// }

// void inorder(struct node *root) 
// {
//   if (root != NULL)
//   {
//     inorder(root -> left);
//     printf(" %d ", root -> data); 
//     inorder(root -> right); 
//   }
// }

// int main()
// {
//     struct node *root;

//     int n,m;
//     printf("Enter no. of node elements: ");
//     scanf("%d",&n);

//     printf("Enter root element: ");
//     scanf("%d",&m);

//     root = new_node(m);

//     printf("Enter other %d node elements:\n",n-1);

//     for(int i=0 ; i<n-1; i++)
//     {
//         int x;
//         printf("Enter for element %d: ",i+1);
//         scanf("%d",&x);
//         insert(root, x);
//     }
     
//     printf("BST in inorder:\n");
//     inorder(root);
// }


// #include <stdio.h>
// #include <stdlib.h>

// struct node 
// {
//     int value ;
//     struct node *left;
//     struct node *right;
// };

// struct node *node(int data)
// {
//     struct node *new1= (struct node *)malloc(sizeof(struct node));
//     new1-> value = data;
//     new1-> left= NULL;
//     new1-> right = NULL;
//     return new1;
// }

// struct node *insert (struct node *root, int data)
// {
//     if(root == NULL)
//     {
//         return node(data);
//     }
//     else if(data > root-> value)
//     root-> right = insert(root->right,data);
//     else
//     {
//     root-> left = insert (root->left,data);
//     }
//     return root;

// }

// void inorder(struct node root)
// {
//     if (root == NULL)
//     {
//         return ;
//     }
//     else

//     inorder(root -> left);
//     printf("%d",root -> value);
//     inorder(root -> right);
// }




// int main()
// {
//     int n, m;
//     printf("Enter the node elements: ");
//     scanf("%d",&n);
//     printf("Enter the value of root: ");
//     scanf("%d",&m);
//     root = node(m);
//     printf("Enter the other %d elemets value: ",n-1);
//     for (int i = 0; i< n-1; i++)
//     {
//         int x;
//         printf("Enter the value of %d element: ",i+1);
//         scanf("%d",&x);
//         root = insert (root,x);
//     }
// }




#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} Node;

typedef struct stack
{
    int size;
    int top;
    Node **array;
} Stack;

Node *newNode(int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

Stack *createStack(int size)
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->size = size;
    stack->top = -1;
    stack->array = (Node **)malloc(stack->size * sizeof(Node *));
    return stack;
}

int isFull(Stack *stack)
{
    return stack->top == stack->size - 1;
}

int isEmpty(Stack *stack)
{
    return stack->top == -1;
}

void push(Stack *stack, Node *node)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = node;
}

Node *pop(Stack *stack)
{
    if (isEmpty(stack))
        return NULL;
    return stack->array[stack->top--];
}

void tree_traversal(Node *root)
{
    Node *temp = root;
    Stack *s_temp = createStack(100); 
    int flag = 1;
    while (flag)
    {
        if (temp)
        {
            push(s_temp, temp);
            temp = temp->left;
        }
        else
        {
            if (!isEmpty(s_temp))
            {
                temp = pop(s_temp);
                printf("%d ", temp->data);
                temp = temp->right;
            }
            else
                flag = 0;
        }
    }
}

int main()
{
    Node *root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->left = newNode(40);
    root->left->right = newNode(50);

    tree_traversal(root);

    return 0;
}