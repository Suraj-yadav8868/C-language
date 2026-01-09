// wap to acending order in 1d array.

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
// 3 ,2,5,6,3
   for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
   }

// Sorted Array display
printf("\n Sorted Array in Ascending Order:\n");
 for(i=0;i<n;i++){
     printf("%d,",arr[i]);
   }

}