// // #include <stdio.h>

// // int main(){
// // int num,Num;
// // printf ("Enter the value of num : ");
// // scanf("%d",&num);
// // Num = checkprime(num);
// // if (Num==2)
// // {
// //     printf("This is a prime number.\n");
// // }
// // else 
// // printf("This is not a prime number.\n");
// // }

// // int checkprime (int a)
// // {
// //     int i;
// //     int count=0;
// //     for(i=1;i<=a;i++)
// //     {
// //         if(a%i==0)
// //         {
// //             count++;
// //         }
// //     }
// //     return count;
// // }



// // #include <stdio.h>
// // #include <math.h>

// // void checkprime(int num)
// // {
// //     int i;
// //     int count=0;
// //     for (i=1; i<=num;i++)
// //     {
// //         if (num%i==0)
// //         {
// //             count++;
// //         }
// //     }
// //     if (count==2)
// //     printf("The given number is a prime number.\n");
// //     else 
// //     printf("The given number is not a prime number.\n");
// // }

// // void checkvalue(int num)
// // {
// //     if (num>0)
// //     printf("Given number is positive integer.\n");
// //     else if(num<0)
// //     printf("Given number is negative integer.\n");
// //     else
// //     printf("Given number is neither positive or negative integer.\n");
// // }

// // void checkpalindrome(int num)
// // {
// // int copy1= num;
// // int rev=0;
// // int div;
// // while (copy1!=0)
// //     {
// //         div=copy1%10;
// //         rev=rev*10 +div;
// //         copy1=copy1/10;
// //     }
// //     if (rev==num)
// //     printf("Given number is pelindrome number.\n");
// //     else 

// //     printf("Given number is not a pelindrome number.\n");
// // }

// // void getarmstrong(int num)
// // {
// //     int div;
// //     double add=0;
// //     while (num!=0)
// //     {
// //         div= num%10;
// //         add= add + pow(div,2) ;
// //         num= num/10;
// //     }
// //     printf("The armstrong of given number is : %.f",add);
// // }

// // int main(){
// //     int num1;
// //     printf("Enter the number:");
// //     scanf("%d",&num1);
// //     checkprime(num1);
// //     checkvalue(num1);
// //     checkpalindrome(num1);
// //     getarmstrong(num1);
// //     return 0;
// // }

// // #include <stdio.h>
 
// //  int main()
// //  {
// //     int n;
// //     scanf("%d",&n);
// //     int a[n];

// //     for(int i=0; i<n; i++)
// //     {
// //     scanf("%d",&a[i]);
// //     }

// //     for(int i=0; i<n; i++)
// //     {
// //     printf("%d ",a[i]);
// //     }

// //     printf("\n");

// //     for (int i = n; i >= 2; i--) 
// //     {
// //         a[i] = a[i - 1];
// //     }
// //     a[2]=6;


// //     for(int i=0; i<n+1; i++)
// //     {
// //     printf("%d ",a[i]);
// //     }
// //     }
 

// // #include <stdio.h>
// // #include <stdlib.h>

// // int main()
// // {
    
// //     printf("Enter the value of n : ");
// //     int n;
// //     scanf("%d",&n);
// //     int *arr= (int *)malloc(n*sizeof(int));
// //     for(int i=0;i<n;i++)
// //     {
// //         scanf("%d",&arr[i]);
// //     }
// //     for(int i=0;i<n;i++)
// //     {
// //         printf("%d ",arr[i]);
// //     }
// //     printf("\n");
// //     printf("Enter the value of m : ");
// // int m;
// //     scanf("%d",&m);
// //     int *array= (int *)malloc(m*sizeof(int));
// //     for(int i=0;i<m;i++)
// //     {
// //         scanf("%d",&array[i]);
// //     }
// //     for(int i=0;i<m;i++)
// //     {
// //         printf("%d ",array[i]);
// //     }
    
// //     int *combinedarray= (int *)malloc((n+m)*sizeof(int));

// //     for(int i=0;i<n;i++)
// //     {
// //         combinedarray[i]= arr[i];
// //     }
// //     for(int i=0;i<m;i++)
// //     {
// //         combinedarray[n+i]= array[i];
// //     }
// //     printf("Their combined array : ");
// //     for(int i=0;i< n + m;i++)
// //     {
// //         printf("%d ",combinedarray[i]);
// //     }
// // }





// // #include <stdio.h>
// // #include <stdlib.h>

// // int main()
// // {
// //     int n,temp;
// //     scanf("%d",&n);
// //     int *a= (int *)malloc(n *sizeof(int));
// //     for (int i=0;i< n;i++)
// //     {
// //         scanf("%d",&a[i]);
// //     }
// //     for (int i=0;i< n;i++)
// //     {
// //         printf("%d ",a[i]);
// //     }
// //     for (int i=0; i<n; i++)
// //     {
// //         for (int j= i+1; j<n; j++)
// //         {
// //             if (a[i]<a[j])
// //             {
// //                 temp= a[i];
// //                 a[i]=a[j];
// //                 a[j]=temp;
// //             }
// //         }
// //     }
// //     printf("\n");

// //     for (int i=0; i<n; i++)
// //     {
// //         printf("%d ",a[i]);
// //     }
// // }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n;
//     printf("Enter the size of n :");
//     scanf("%d",&n);
//     int *array = (int *)malloc(n*(sizeof(int)));
//     for(int i=0; i<=n; i++)
//     {
//         scanf("%d", &array[i]);
//     }
//     for(int i=0; i<n; i++)
//     {
//         printf("%d", array[i]);
//     }
//     for(int i=0; i<=n; i++)
//     {
//         for(int j=i+1;j<n ;j++)
//         {
//           if()  
//         }
//     }
// }



#include <stdio.h>

int main(){
    int a=100;
    int a=16;
    printf("shdh %d\n",y);
    return 0;
}