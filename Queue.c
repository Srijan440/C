
// #include <stdio.h>

// int a[3];
// int front = -1;
// int rear = -1;

// void enqueue(int data)
// {
//     if (rear == 2)
//     {
//         printf("Overflow.\n");
//     }
//     else
//     {
//         if (front == -1)
//         {
//             front = 0;
//         }
//         rear++;
//         a[rear] = data;
//         printf("Enqueued %d.\n", data);
//     }
// }

// void dequeue()   
// {
//     if (front == -1 || front > rear)
//     {
//         printf("Underflow.\n");
//     }
//     else
//     {
//         printf("Dequeued element: %d\n", a[front]);
//         front++;

//         if (front > rear)
//         {
//         front = rear = -1;
//         }
//     }
// }

// void peek()
// {
//     if (front == -1 || front > rear)
//     {
//         printf("Underflow.\n");
//     }
//     else
//     {
//         printf("Front element: %d\n", a[front]);
//     }
// }

// void display()
// {
//     if (front == -1 || front > rear)
//     {
//         printf("Underflow.\n");
//     }
//     else
//     {
//         printf("Queue elements: ");
//         for (int i = front; i <= rear; i++)
//         {
//             printf("%d ", a[i]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int choice, data;
//     int i = 0;

//     while (i != 7)
//     {
//         printf("\n**Menu**\n");
//         printf("1. Enqueue\n");
//         printf("2. Dequeue\n");
//         printf("3. Peek\n");
//         printf("4. Display\n");
//         printf("5. IsEmpty\n");
//         printf("6. IsFull\n");
//         printf("7. Exit\n");
//         printf("Enter Choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//             case 1:
//                 printf("Enter data to enqueue: ");
//                 scanf("%d", &data);
//                 enqueue(data);
//                 break;
//             case 2:
//                 dequeue();
//                 break;
//             case 3:
//                 peek();
//                 break;
//             case 4:
//                 display();
//                 break;
//             case 5:

//                     if (front == -1 || front > rear)
//                     {
//                         printf("Queue is Empty.\n");
//                     }
//                     else
//                     {
//                     printf("Queue is not Empty.\n");
//                     }
//                     break;

//             case 6:
//                 if (rear == 2)
//                 {
//                   printf("Queue is Full.\n");
//                 }
//                 else
//                 {
//                     printf("Queue is not Full.\n");
//                 }
//                 break;

//             case 7:
//                 i = 7;
//                 break;
//             default:
//                 printf("Invalid Choice.\n");
//                 break;
//         }
//     }
//     return 0;
// }



// queue using single linklist..


// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int value;
//     struct Node *next;
// };

// struct Node *front = NULL;
// struct Node *rear = NULL;

// void enqueue(int data) 
// {

//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     newNode->value = data;
//     newNode->next = NULL;

//     if (front == NULL && rear == NULL) 
//     {
//         front = rear = newNode;
//     } 
//     else 
//     {
//         rear->next = newNode;
//         rear = newNode;
//     }
// }

// void display() 
// {
//     if (front == NULL && rear == NULL) 
//     {
//         printf("Empty queue.\n");
//     } 
//     else 
//     {
//         struct Node *temp = front;
    
//         while (temp != NULL) 
//         {
//             printf("%d ", temp->value);
//             temp = temp->next;
//         }
//         printf("\n");
//     }
// }

// void dequeue() 
// {
//     if (front == NULL && rear == NULL) {
//         printf("Empty queue.\n");
//     } 
//     else 
//     {
//         struct Node *temp = front;
    
//         printf("Dequeued element: %d\n", front->value);
//         front = front->next;
//         free(temp);

//         if (front == NULL) 
//         {
//             rear = NULL; 
//         }
//     }
// }

// void peek() 
// {
//     if (front == NULL && rear == NULL) 
//     {
//         printf("Empty queue.\n");
//     } 
//     else 
//     {
//         printf("Front element: %d\n", front->value);
//     }
// }

// int main() 
// {
//     int choice, data;
//     int i = 0;

//     while (i != 7) 
//     {
//         printf("\n**Menu**\n");
//         printf("1. Enqueue\n");
//         printf("2. Dequeue\n");
//         printf("3. Peek\n");
//         printf("4. Display\n");
//         printf("5. IsEmpty\n");
//         printf("6. IsFull\n");
//         printf("7. Exit\n");
//         printf("Enter Choice: ");
//         scanf("%d", &choice);

//         switch (choice) 
//         {
//             case 1:
//                 printf("Enter data to enqueue: ");
//                 scanf("%d", &data);
//                 enqueue(data);
//                 break;
//             case 2:
//                 dequeue();
//                 break;
//             case 3:
//                 peek();
//                 break;
//             case 4:
//                 display();
//                 break;
//             case 5:
//                 if (front == NULL && rear == NULL) {
//                     printf("Queue is Empty.\n");
//                 } else {
//                     printf("Queue is not Empty.\n");
//                 }
//                 break;
//             case 6:
//                 printf("Queue is not Full .\n");
//                 break;
//             case 7:
//                 i = 7;
//                 break;
//             default:
//                 printf("Invalid Choice.\n");
//                 break;
//         }
//     }
//     return 0;
// }




// circular queue in array

// #include <stdio.h>

// #define MAX_SIZE 3 
// int a[MAX_SIZE];
// int front = -1;
// int rear = -1;

// void enqueue(int data) {
//     if ((front == 0 && rear == MAX_SIZE - 1) || (rear == (front - 1) % (MAX_SIZE - 1))) {
//         printf("Overflow.\n");
//     } else if (front == -1) {
//         front = rear = 0;
//         a[rear] = data;
//         printf("Enqueued %d.\n", data);
//     } else if (rear == MAX_SIZE - 1 && front != 0) {
//         rear = 0;
//         a[rear] = data;
//         printf("Enqueued %d.\n", data);
//     } else {
//         rear++;
//         a[rear] = data;
//         printf("Enqueued %d.\n", data);
//     }
// }

// void dequeue() {
//     if (front == -1) {
//         printf("Underflow.\n");
//     } else if (front == rear) {
//         printf("Dequeued element: %d\n", a[front]);
//         front = rear = -1;
//     } else if (front == MAX_SIZE - 1) {
//         printf("Dequeued element: %d\n", a[front]);
//         front = 0;
//     } else {
//         printf("Dequeued element: %d\n", a[front]);
//         front++;
//     }
// }

// void peek() {
//     if (front == -1) {
//         printf("Underflow.\n");
//     } else {
//         printf("Front element: %d\n", a[front]);
//     }
// }

// void display() {
//     if (front == -1) {
//         printf("Underflow.\n");
//     } else {
//         printf("Queue elements: ");
//         if (rear >= front) {
//             for (int i = front; i <= rear; i++) {
//                 printf("%d ", a[i]);
//             }
//         } else {
//             for (int i = front; i < MAX_SIZE; i++) {
//                 printf("%d ", a[i]);
//             }
//             for (int i = 0; i <= rear; i++) {
//                 printf("%d ", a[i]);
//             }
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int choice, data;
//     int i = 0;

//     while (i != 7) {
//         printf("\n**Menu**\n");
//         printf("1. Enqueue\n");
//         printf("2. Dequeue\n");
//         printf("3. Peek\n");
//         printf("4. Display\n");
//         printf("5. IsEmpty\n");
//         printf("6. IsFull\n");
//         printf("7. Exit\n");
//         printf("Enter Choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter data to enqueue: ");
//                 scanf("%d", &data);
//                 enqueue(data);
//                 break;
//             case 2:
//                 dequeue();
//                 break;
//             case 3:
//                 peek();
//                 break;
//             case 4:
//                 display();
//                 break;
//             case 5:
//                 if (front == -1) {
//                     printf("Queue is Empty.\n");
//                 } else {
//                     printf("Queue is not Empty.\n");
//                 }
//                 break;
//             case 6:
//                 if ((front == 0 && rear == MAX_SIZE - 1) || (rear == (front - 1) % (MAX_SIZE - 1))) {
//                     printf("Queue is Full.\n");
//                 } else {
//                     printf("Queue is not Full.\n");
//                 }
//                 break;
//             case 7:
//                 i = 7;
//                 break;
//             default:
//                 printf("Invalid Choice.\n");
//                 break;
//         }
//     }
//     return 0;
// }
