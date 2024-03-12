// // #include <stdio.h>
// // #include <stdlib.h>

// // struct node
// // {
// //     int data;
// //     struct node *right;
// //     struct node *left;
// // };

// // struct node *create()
// // {
// //     int x;
// //     struct node *newnode= (struct node *)malloc(sizeof(struct node));
// //     printf("\nEnter -1 for no node.\n");
// //     printf("Enter the data: ");
// //     scanf("%d",&x);
// //     printf("\n");
// //     if(x == -1)
// //     {
// //         return NULL;
// //     }
// //     newnode-> data= x;
// //     printf("Enter left child of %d",x);
// //     newnode->left = create();
// //     printf("Enter right child of %d",x);
// //     newnode->right = create();
// //     return newnode;
// // }

// // void Inorder (struct node *root)
// // {
// //     if(root == NULL)
// //     {
// //         return ;
// //     }
// //     else
// //     {
// //         Inorder (root->left);
// //         printf("%d ",root->data);
// //         Inorder (root->right);
// //     }
// // }

// // void Preorder (struct node *root)
// // {
// //     if(root == NULL)
// //     {
// //         return ;
// //     }
// //     else
// //     {
// //         printf("%d ",root ->data);
// //         Preorder(root ->left);
// //         Preorder(root -> right);
// //     }
// // }

// // int main()
// // {
// //     struct node *root = NULL;
// //     root = create();
// //     printf("Inorder is:");
// //     Inorder(root);
// //     printf("\n");
// //     printf("Preorder is:");
// //     Preorder(root);
// // }

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };

// struct node *create(struct node *root)
// {
//     int x;
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     printf("Enter -1 for no node.\n");
//     printf("Enter data:");
//     scanf("%d", &x);
//     if (x == -1)
//     {
//         return NULL;
//     }
//     newnode->data = x;
//     printf("Enter left node of %d:\n", x);
//     newnode->left = create(root);
//     printf("Enter right node of %d:\n", x);
//     newnode->right = create(root);
//     return newnode;
// }

// void printInorder(struct node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     printInorder(root->left);
//     printf("%d ", root->data);
//     printInorder(root->right);
// }

// int main()
// {
//     struct node *root = NULL;
//     root = create(root);
//     printf("Inorder traversal:");
//     printInorder(root);
// }






// polynomail implementation




// #include <stdio.h>
// #include <stdlib.h>

// struct node 
// {
//     float val1;
//     int val2;
//     struct node *next;
// };

// struct node *create (float coff, int exp)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     if (newnode == NULL)
//     {
//         exit (1);
//     }
//     else
//     {
//         newnode->val1= coff;
//         newnode->val2= exp;
//         newnode->next = NULL;
//         return newnode;
//     }
// }

// struct node *polynomial (struct node *head, float coff, int exp)
// {
//     struct node *newnode = create(coff, exp);
//     if(head == NULL || exp > head->val2)
//     {
//         newnode->next = head;
//         return newnode;
//     }
//     else
//     {
//         struct node *current = head;
//         while (current->next != NULL && exp < current-> next-> val2 )
//         {
//             current = current->next;
//         }
//         current->next = newnode->next;
//         current->next = newnode;
//         return head;
//     }
// }

// void print(struct node *head)
// {
//     struct node *temp = head;
//     while (temp != NULL)
//     {
//         printf("(%.1fx^%d)",temp->val1,temp->val2);
//         temp= temp->next;
//         if(temp!=NULL)
//         {
//             printf(" + ");
//         }
//         else
//         {
//             printf("\n");
//         }
//     }
// }

// int main()
// {
//     int n, exp;
//     float coff;
//     struct node *head = NULL;
//     printf("Enter the terms :");
//     scanf("%d",&n);
//     printf("\n");
//     for (int i =0; i<n ;i++)
//     {
//         printf("Enter the coffiecient of term %d :",i+1);
//         scanf("%f",&coff);
//         printf("Enter the exponent of term %d :",i+1);
//         scanf("%d",&exp);
//         head = polynomial(head,coff,exp);
//     }
//     printf("The polynomial is: ");
//     print(head);
//     return 0;
// }




#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* next;
};

// Function to create a new node
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->value = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node into the sorted linked list
struct node* insertSorted(struct node* head, int data) {
    struct node* newNode = createNode(data);

    if (head == NULL || data < head->value) {
        newNode->next = head;
        return newNode;
    } else {
        struct node* current = head;
        while (current->next != NULL && data > current->next->value) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
        return head;
    }
}

// Function to print the linked list
void printLinkedList(struct node* head) {
    struct node* current = head;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
}

int main() {
    struct node* head = NULL;
    int n, data;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter the value of node %d: ", i + 1);
        scanf("%d", &data);
        head = insertSorted(head, data);
    }

    printf("Sorted Linked List: ");
    printLinkedList(head);

    return 0;
}