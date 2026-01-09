// Write a Program to find square of each element from the given array.

#include<stdio.h>

void main(){
    int i,n;

    printf("Array size:");
    scanf("%d",&n);

    int arr[n];
    
    //for Input
    for(i=0;i<n;i++){
      printf("\nEnter arr[%d]:",i);
      scanf("%d",&arr[i]);
    }
    //for Output
   for(i=0;i<n;i++){
     printf("%d,",arr[i]);
   }
   
   printf("\n Array with square of each elements:\n");

   for(i=0;i<n;i++){
    printf("%d,",arr[i]*arr[i]);
   }
}