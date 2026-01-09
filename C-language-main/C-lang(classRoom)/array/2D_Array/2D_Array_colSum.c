// WAP to perform column-wise sum of 2D array.

#include<stdio.h>

void main(){
    int i,j,r,c,sum=0;

    printf("Enter rows: ");
    scanf("%d",&r);

     printf("Enter columns: ");
    scanf("%d",&c);

    int arr[r][c];

    // for printing sum of each cols
    // 2 3 4 (0,0)
    //2 3 4   (1,0)
    //4 5 6    (2,0)
    for(i=0;i<r;i++){
      
      for(j=0;j<1;j++){
         printf("\nEnter arr[%d][%d]\n",i,j);
         scanf("%d",&arr[i][j]);
         sum+=arr[i][j];
      }
       printf("sum of columns: %d",sum);
    }


}