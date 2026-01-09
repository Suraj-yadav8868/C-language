// Write a Program to perform the merge operation of two 1D arrays & store it in another array. 
// Keep in mind that both array sizes can be different.

#include<stdio.h>

void main(){
    int i,n1,n2,j=0;

    printf(" First Array size:");
    scanf("%d",&n1);
  
     printf(" Second Array size:");
    scanf("%d",&n2);
    int array1[n1];
    int array2[n2];
    int n3=n1+n2;
 
    
    int result[n3];
    // For Input in first array
    for(i=0;i<n1;i++){
      printf("\nEnter array1[%d]:",i);
      scanf("%d",&array1[i]);
    }
    // For Input in second array
    for(i=0;i<n2;i++){
      printf("\nEnter array2[%d]:",i);
      scanf("%d",&array2[i]);
    }

  for(i=0;i<n3;i++){
     if(i<n1){
      result[i]=array1[i];
     }
     else{
        result[i]=array2[j];
        j++;
     }
  }
  // For display
  printf("\n Array after merging :\n")
   for(i=0;i<n3;i++){
     printf("%d,",result[i]);
   }
  
}