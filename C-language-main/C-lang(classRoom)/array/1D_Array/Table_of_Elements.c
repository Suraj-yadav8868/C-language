// WAP to print the multiplication table of each array element.

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
  
  // for table
 printf("\n Table of Each Elements in Array\n");
  for(i=0;i<n;i++){
   printf("Table of %d :\n",arr[i]);
    for(j=1;j<=10;j++){
        
        printf("%d * %d = %d\n",arr[i],j,arr[i]*j);
    }
    printf("\n");
  }
}