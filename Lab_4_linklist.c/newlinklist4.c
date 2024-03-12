// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int val;
//     struct node *next;
// };
// struct node *head=NULL;                               ///global variable 
// struct node *first=NULL;
// struct node *temp=NULL;


// void push(int data)
// {
    
//     struct node *new_node = (struct node *)malloc(sizeof(struct node));
//     new_node->val = data;
//     new_node->next = NULL;
//     if(head==NULL)
//     {
//         head=new_node;
//         first=head;
//         temp=head;
//     }
//     else
//     {
//         temp=new_node;
//         first->next=temp;
//         first=temp;
//     }
// }

// void insert( int num)
// {
//     struct node *new_node = (struct node *)malloc(sizeof(struct node));
//     new_node->val = num;
//     new_node->next = NULL;

//     if (head == NULL)
//     {
//         head= new_node;
//     }

//     struct node *temp =head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = new_node;

// }
// void printlinklist()
// {
//     struct node *ptr = head;
//     while (ptr != NULL)
//     {
//         printf("%d\t", ptr->val);
//         ptr = ptr->next;
//     }
// }
// int main()
// {
//     //struct node *head = NULL;
//     int n;
//     scanf("%d",&n);
// for(int i=0;i<n;i++)
// {
//     int elem;
    
//     scanf("%d",&elem);
//     push(elem);
// }
    
//     printlinklist();
    
//     printf("\n");
    
//     insert( 56);
    
//     printlinklist();
// }



#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data) {
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    int data;
    printf("Enter the data for the root node: ");
    scanf("%d", &data);

    struct node* root = newNode(data);

    printf("Enter the data for the left child of the root: ");
    scanf("%d", &data);
    root->left = newNode(data);

    printf("Enter the data for the right child of the root: ");
    scanf("%d", &data);
    root->right = newNode(data);

    printf("Inorder traversal of binary tree is:\n");
    inorder(root);

    return 0;
}
