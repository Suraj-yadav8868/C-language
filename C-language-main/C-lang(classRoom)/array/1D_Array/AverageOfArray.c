// wap to find the average of 1D array.

#include<stdio.h>

void main(){
    int i,n,sum=0;
    float average;

    printf("Array size:");
    scanf("%d",&n);

    int arr[n];
    //input
    for(i=0;i<n;i++){
      printf("\nEnter arr[%d]:",i);
      scanf("%d",&arr[i]);
    }
    //output
   for(i=0;i<n;i++){
     printf("%d,",arr[i]);
     sum+=arr[i];
   }
   printf("\nLength of an Array: %d ",n);
   average=sum/n;

   printf("\nAverage of all elements : %.2f",average);
}