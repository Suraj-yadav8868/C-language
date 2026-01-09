// Write a Program to find leap years between two given numbers and store them in an array.
//  And then print that array. 
// Make this program in the shortest memory.

#include<stdio.h>

void main(){
    int year1,year2,i,count=0,j=0;
  
    printf("Enter year1 & year2: ");
    scanf("%d%d",&year1,&year2);
   
 // count Leap years
    for(i=year1;i<=year2;i++){
       if(year1%4==0){
         count++;
         
       }
    }
  int arr[count];
    // Store leap years
    for(i=year1;i<=year2;i++){
       if(i%4==0){
         arr[j]=i;
         j++;
       }
    }
    printf("\nArray of leap years:\n");
   for(i=0;i<j;i++){
      printf("%d,",arr[i]);
   }
}