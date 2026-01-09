// WAP to perform row-wise sum of 2D array.

#include<stdio.h>

void main(){
    int i,j,r,c,sum;

    printf("Enter rows: ");
    scanf("%d",&r);

     printf("Enter columns: ");
    scanf("%d",&c);

    int arr[r][c];

    // for printing sum of each rows
    for(i=0;i<r;i++){
        sum=0;
      for(j=0;j<c;j++){
         printf("\nEnter arr[%d][%d]\n",i,j);
         scanf("%d",&arr[i][j]);
         sum+=arr[i][j];
      }
      printf("\nSum of %d row: %d",i,sum);
    }


}