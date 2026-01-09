// Wap to find maximum from the 1d array.

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

   // for finding Maximum
   int max=arr[0];

   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
        if(max<arr[j]){
           max=arr[j];
        }
      }
   }
   printf("\n Maximum from the array is: %d",max);
  
}