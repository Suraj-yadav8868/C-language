// Write a program in C to read n number of values in an array 
// and display them in reverse order.

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
  printf("\nArray before Reversing:\n");
   for(i=0;i<n;i++){
     printf("%d,",arr[i]);
   }
  
//    for reverse 2,4,5,6
printf("\n Reversed Array:\n");
 for(i=n-1;i>=0;i--){
    printf("%d,",arr[i]);
 }
}