// wap to find the length of a 1D array.

#include<stdio.h>

void main(){
    int i,n;

    printf("Array size:");
    scanf("%d",&n);

    int arr[n];
    
    for(i=0;i<n;i++){
      printf("\nEnter arr[%d]:",i);
      scanf("%d",&arr[i]);
    }

   for(i=0;i<n;i++){
     printf("%d,",arr[i]);
   }
   printf("\nLength of an Array: %d ",n);
}