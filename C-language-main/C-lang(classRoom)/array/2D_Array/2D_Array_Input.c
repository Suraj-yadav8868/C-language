// WAP to get & print 2D array of N elements.

#include<stdio.h>

void main(){
    int i,j,r,c;

    printf("Enter rows: ");
    scanf("%d",&r);

     printf("Enter columns: ");
    scanf("%d",&c);

    int arr[r][c];

    // for getting elements
    for(i=0;i<r;i++){
      for(j=0;j<c;j++){
         printf("Enter arr[%d][%d]\n",i,j);
         scanf("%d",&arr[i][j]);
      }
    }

     // for printing elements
     printf("\n Elements in 2D Array:\n");
       for(i=0;i<r;i++){
      for(j=0;j<c;j++){
         printf("%d,",arr[i][j]);
         
      }
    }
}