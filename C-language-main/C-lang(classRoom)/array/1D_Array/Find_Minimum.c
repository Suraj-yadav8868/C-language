// Wap to find minimum from the 1d array.

#include<stdio.h>

void main(){
    int i,n,j;

    printf("Array size:");
    scanf("%d",&n);

    int arr[n];
    
    // For Input 
    for(i=0;i<n;i++){
      printf("\nEnter arr[%d]:",i);
      scanf("%d",&arr[i]);
    }
  // For display
   for(i=0;i<n;i++){
     printf("%d,",arr[i]);
   }

   // for finding Minimum
   int min=arr[0];

   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
        if(min>arr[j]){
           min=arr[j];
        }
      }
   }
   printf("\n Maximum from the array is: %d",min);
  
}