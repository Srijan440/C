// #include <stdio.h>

// int main(){
//     int a[9],size,pos,num;
//     printf("Enter the size of array:");
//     scanf("%d",&size);
//     for(int i=0;i<size;i++)
//     {
//     printf("Enter the elements of array:");
//     scanf("%d",&a[i]);
//     }
//     printf("Elements: ");
//     for(int i=0;i<size;i++)
//     {                                                              array for insertion at any point;
//     printf("%d ",a[i]);
//     }
//     printf("\nEnter the position: ");
//     scanf("%d",&pos);
//     printf("\nEnter the number: ");
//     scanf("%d",&num);
//     for(int i=size-1;i>=pos-1;i--)
//     {
//         a[i+1]=a[i];
//     }
//     a[pos-1]=num;
//     size++;
//     for(int i=0;i<size+1;i++)
//     {
//     printf("%d ",a[i]);
//     }
// }




// #include <stdio.h>

// int main(){
//     int a[9],size,num;
//     printf("Enter the size of array:");
//     scanf("%d",&size);
//     for(int i=0;i<size;i++)
//     {
//     printf("Enter the elements of array:");
//     scanf("%d",&a[i]);
//     }
//     printf("Elements: ");
//     for(int i=0;i<size;i++)
//     {
//     printf("%d ",a[i]);
//     }
//     printf("\nEnter the number: ");
//     scanf("%d",&num);                                                                      //last insertion
//     for (int i=size-1;i>=size-1;i--)       // for(int i=size-1;i>=0;i--)
//     {
//         a[i+1]=a[i];
//     }
//     a[size]=num;
//     size++;
//     for(int i=0;i<size+1;i++)
//     {
//     printf("%d ",a[i]);
//     }
// }




// #include <stdio.h>

// int main(){
//     int a[9],size,num,pos;
//     printf("Enter the size of array:");
//     scanf("%d",&size);
//     for(int i=0;i<size;i++)
//     {
//     printf("Enter the elements of array:");
//     scanf("%d",&a[i]);
//     }
//     printf("Elements: ");
//     for(int i=0;i<size;i++)
//     {
//     printf("%d ",a[i]);
//     }
//     printf("\nEnter the position: ");
//     scanf("%d",&pos);
//     for (int i=pos-1; i<=size-1; i++)                    //deletion at random place
//     {
//         a[i]=a[i+1];
//     }
//     size--;
//     for(int i=0;i<=size-1;i++)
//     {
//     printf("%d ",a[i]);
//     }
// }



// #include <stdio.h>

// int main(){
//     int a[9],size,num;
//     printf("Enter the size of array:");
//     scanf("%d",&size);
//     for(int i=0;i<size;i++)
//     {
//     printf("Enter the elements of array:");
//     scanf("%d",&a[i]);
//     }
//     printf("Elements: ");
//     for(int i=0;i<size;i++)                                   
//     {
//     printf("%d ",a[i]);
//     }

//     for (int i=size-1;i<=size-1;i++)          // for (int i=0; i<=size-1; i++)             //deletion of array at end and beginning.               
//     {
//         a[i]=a[i+1];
//     }
//     size--;
//     printf("\n");
//     for(int i=0;i<=size-1;i++)
//     {
//     printf("%d ",a[i]);
//     }
// }

