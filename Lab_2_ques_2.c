#include<stdio.h>

int main(){
    int arr[10][10];
    int r,c;
    printf("Enter the size  no. of rows and cols");
    scanf("%d%d",&r,&c);

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the next element");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    int count = 0 ;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==0){
                count++;
            }

        }
    }   
    printf("The non zero elements are %d\n",count);
    
    printf("The upper triangluar matrix\n");
    for(int i=0;i<r;i++){
        
        for(int j=0;j<c;j++){
            if(i<j){
                printf("%d",arr[i][j]);
            }
            else
             printf(" ");
            
        }
        printf("\n");
    }    

    printf("The above and below of diagonal");

    printf("The non zero elements are %d\n",count);
    
    for(int i=0;i<r;i++){
        
        for(int j=0;j<c;j++){
            if(i<j||i>j){
                printf("%d ",arr[i][j]);
            }
            else
             printf(" ");
            
        }
        printf("\n");
    }    
    
}