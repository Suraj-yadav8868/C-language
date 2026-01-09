// WAP to get & print 1D array of N elements.

#include<stdio.h>

void main(){
    int i,n;

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
  
}