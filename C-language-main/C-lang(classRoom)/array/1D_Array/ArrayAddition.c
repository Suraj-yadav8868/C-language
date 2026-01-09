// Write a Program to perform the addition operation of 
// two 1D arrays & and store it in another array. 
// Keep in mind that both array sizes must be the same.


#include<stdio.h>

void main(){
    int i,n,sum=0;
    

    printf("Array size:");
    scanf("%d",&n);

    int arr1[n];
    int arr2[n];
    int result[n];
    
    //input
    for(i=0;i<n;i++){
      printf("\nEnter arr1[%d]:",i);
      scanf("%d",&arr1[i]);
    }
        for(i=0;i<n;i++){
      printf("\nEnter arr2[%d]:",i);
      scanf("%d",&arr2[i]);
    }
    //output
    printf("\n array1:");
   for(i=0;i<n;i++){
     printf("%d,",arr1[i]);
   }
   printf("\n array2:");
   for(i=0;i<n;i++){
     printf("%d,",arr2[i]);
   }
  
   //sum logic
   for(i=0;i<n;i++){
     sum=arr1[i]+arr2[i];
     result[i]=sum;
   }
  
   //printing resultant array
   printf("\n");
    printf("\n Result Array");
   for(i=0;i<n;i++){
     printf("%d,",result[i]);
   }
}