
// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//   int item;
//   struct node* left;
//   struct node* right;
// };

// // Inorder traversal
// void inorderTraversal(struct node* root) {
//   if (root == NULL) return;
//   inorderTraversal(root->left);
//   printf("%d ->", root->item);
//   inorderTraversal(root->right);
// }

// // Preorder traversal
// void preorderTraversal(struct node* root) {
//   if (root == NULL) return;
//   printf("%d ->", root->item);
//   preorderTraversal(root->left);
//   preorderTraversal(root->right);
// }

// // Postorder traversal
// void postorderTraversal(struct node* root) {
//   if (root == NULL) return;
//   postorderTraversal(root->left);
//   postorderTraversal(root->right);
//   printf("%d ->", root->item);
// }

// // Create a new Node
// struct node* createNode(value) {
//   struct node* newNode = malloc(sizeof(struct node));
//   newNode->item = value;
//   newNode->left = NULL;
//   newNode->right = NULL;

//   return newNode;
// }

// // Insert on the left of the node
// struct node* insertLeft(struct node* root, int value) {
//   root->left = createNode(value);
//   return root->left;
// }

// // Insert on the right of the node
// struct node* insertRight(struct node* root, int value) {
//   root->right = createNode(value);
//   return root->right;
// }

// int main() {
//   struct node* root = createNode(1);
//   insertLeft(root, 2);
//   insertRight(root, 3);
//   insertLeft(root->left, 4);

//   printf("Inorder traversal \n");
//   inorderTraversal(root);

//   printf("\nPreorder traversal \n");
//   preorderTraversal(root);

//   printf("\nPostorder traversal \n");
//   postorderTraversal(root);
// }





// code for addressing where you want to put values



// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int value;
//     struct node *left;
//     struct node *right;
// };

// struct node *createNode(int data) {
//     struct node *newNode = (struct node *)malloc(sizeof(struct node));
//     newNode->value = data;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;
// }

// void inorderTraversal(struct node *root) 
// {
//     if (root != NULL) {
//         inorderTraversal(root->left);
//         printf("%d ", root->value);
//         inorderTraversal(root->right);
//     }
// }

// int main() {
//     struct node *root = createNode(1);
//     root->left = createNode(2);
//     root->right = createNode(3);
//     root->left->left = createNode(4);
//     root->right->left = createNode(5);
//     root->left->right = createNode(6);
//     root->right->right = createNode(7);

//     printf("Inorder traversal: ");
//     inorderTraversal(root);
//     printf("\n");

//     return 0;
// }




#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *left;
    struct node *right;
};

struct node *createNode(struct node *root,int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->value = data;
    newNode->left = NULL;
    newNode->right = NULL;

    if ()
    return newNode;
}

void inorderTraversal(struct node *root) 
{
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->value);
        inorderTraversal(root->right);
    }
}

int main() 
{
    printf("Enter the root value: ");
    int r;
    scanf("%d",&r);
    struct node *root = createnode(r);

printF("Enter the total nodes for tree: ");
int n,data;
scanf("%d",&n);
for (int i=0;i<n;i++)
{
    printf("Enter tha data for create tree: ");
    scanf("%d",&data);
    root= createnode(root);
}

    printf("\n");    
    printf("Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}