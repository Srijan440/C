// #include <stdio.h>
// int main()
//{
//  int num;
//  int fact=1;

// scanf("%d",&num);                             //factorial;
// for(int i=1;i<=num;i++)
// {
//     fact=fact*i;
// }
// printf("%d",fact);
//}



//..............................................................



// #include <stdio.h>

// int main()
// {
//     int num;
//     scanf("%d",&num);
//     int a= num;
//     int div;
//     int rev=0;

//     while(a!=0)
//     {
//         div=a%10;
//         rev=rev*10 +div;
//         a=a/10;
//     }
//     printf("%d",rev);
//     printf("\n");                                        // reverse a number.     except this line (int a =num);


//     if (num==rev)
//     {
//         printf("It is a pelindrome number.");
//     }
//     else                                                   // pelindrome number
//     {
//         printf("It is not a pelindrome number.");
//     }
// }


// ................................................................................




// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int num;
//     printf("Enter the number:");
//     scanf("%d", &num);
//     int power = 0;
//     int copy = num;
//     while (copy != 0)
//     {
//         copy = copy / 10;
//         power++;
//     }
//     printf("Its power : %d",power);
//     printf("\n");
//     double sum = 0;                                                //armstrong
//     int copy2 = num;
//     while (num != 0)
//     {
//         int div = num % 10;
//         sum = sum + pow(div, power);
//        ///////// sum = sum + p;
//         num = num / 10;
//     }
// printf("%f",sum);
//     if (sum == copy2)
//     {
//         printf(" It is a armstrong number.");
//     }
// }





//..................................................................






// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     printf("Enter any name:");
//     char name[100];

//     scanf("%s", &name);
//     int count = strlen(name);
//     int i;
//     for (i = 0; i < count; i++)
//     {
//         printf("%c", name[i]);
//     }                                                         // print name in a string;

// printf("\n");

//     printf("Its reverse : ");
//    for (int j=count;j>=0;j--)                                 // its reverse;
//    {
//     printf("%c", name[j]);
//    }

// printf("\n");


//     printf("Index at n:");
//     int n;
//     scanf("%d",&n);

//     for (int k=1;k< count;k++)                                // print at index at n position.
//     {
//         if (k==n)
//         {
//             printf("%c",name[k]);                             // printf("Character at position 4:");  //  printf("%c",name[4]);
//         }
//     }

// }


//...........................................................................


// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     printf("Enter size of an array: ");
//     int size;
//     scanf("%d", &size);
//     int i;
//     int *arr = (int *)malloc(size * sizeof(int));

//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (i = 0; i < size; i++)
//     {
//         printf("%d", arr[i]);                              //for creating an array and input elements in array.
//     }

//     int count1 = 0;                                       
//     int count2;
//     int j;

//     for (i = 0; i < size; i++)
//     {
//         count2 = 0;
//         for (j = 1; j <= arr[i]; j++)
//         {
//             if (arr[i] % j == 0)
//             {
//                 count2++;
//             }
//         }
//         if (count2 == 2)                                   //check elements contain prime or not,and if have then print how much. 
//         {
//             count1++;
//         }
//     }
//     printf("%d", count1);
// }


//...............................................................


// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char name[100];
//     printf("Enter any name : ");
//     fgets(name,100,stdin);

//     int number= strlen(name);
//     for (int i=0;i< number; i++)                //  change line when there is any space in your input name,
//     {
//         if(name[i]==' ')
//         printf("\n",name[i]);
//         else
//         printf("%c",name[i]);
//     }


// }






// .............................................................





// #include <stdio.h>

// int main()
// {
//     int product=1;
//     int div;
//     int num;
//     printf("Enter the value of num: ");
//     scanf("%d",&num);
//                                                              //product of a given number ; also same code as for sum but sum=0;
//     while(num!=0)
//     {
//         div=num%10;
//         product=product*div;
//         num=num/10;
//     }
//     printf("%d",product);
// }



//.........................................................



// #include <stdio.h>

// int main()
// {
//     float n;
//     float m;

//     printf("Enter the value of Fahrenheit=");                  //for temperature.
//     scanf("%f",&n);

//     m = ((n-32)*5/9);

//     printf("The value of celsius=%f",m);
// }



//.........................................................


// #include <stdio.h>

// int main()
// {
//     int a,b;
//     printf("Enter value of a :");
//     scanf("%d",&a);
//     printf("Enter value of b :");
//     scanf("%d",&b);

//     int c = a+b;

//     printf("%d",c);
//     printf("\n");
//     int count=0;
//     for(int i=1; i<=c; i++)
//     {
//         if(c%i==0)
//         {
//             count++;                                                    //sum of two integer is a prime or not
//         }       
//     }
//     if (count==2)
//     {
//         printf("Given Sum is prime.");
//     }
//     else
//     {
//         printf("Given Sum is not a prime.");
//     }
// }




//......................................................................




// #include <stdio.h>

// int main(){
    
//     int num;
//     printf("Enter any number:");
//     scanf("%d",&num);
//     printf("\n");
//     int copy=num;
//     int div;                                               //checking pelindrone number.
//     int rev=0;
//     while(copy!=0)
//     {
//         div=copy%10;
//         rev=rev*10 +div;
//         copy=copy/10;
//     }
//     if(rev==num)
//     {
//         printf("Given number is pelindrome:");
//     }
//     else
//     {
//         printf("It is not a pelindrome number.");
//     }
// }




//....................................................................




// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {   
//     int size,i;
//     printf("Enter the size of array: ");
//     scanf("%d",&size);
//     int *arr= (int *)malloc(size*sizeof(int));

//     for(i=0;i< size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//                                                          // largest number.
//     int largest= arr[0];
//     for(i=0; i<size;i++)
//     {
//         if(largest < arr[i])
//         {
//             largest = arr[i];
//         }
//     }

//     printf(" The largest number among all numbers in the string is %d",largest);
// }






//...................................................




// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {   
//     int size,i;
//     printf("Enter the size of array: ");
//     scanf("%d",&size);
//     int *arr= (int *)malloc(size*sizeof(int));

//     for(i=0;i< size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//                                                                                //smallest number.
//     int smallest = arr[0];
//     for(i=0; i<size;i++)
//     {
//         if(smallest > arr[i])
//         {
//             smallest = arr[i];
//         }
//     }

//     printf("\nThe largest number among all numbers in the string is %d",smallest);
// }