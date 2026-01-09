//wap to print sum of 1D array

#include<stdio.h>

void main(){
    int i,n,sum=0;
   

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

   printf("\nAddition of all elements : %d",sum);
}