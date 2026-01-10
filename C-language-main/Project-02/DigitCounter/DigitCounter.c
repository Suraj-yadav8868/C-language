// Problem : Develop a program to count the total number of 
// digits in a program.
// Example Output: 638 --> 3 digits 

#include<stdio.h>

void main(){
    int i,num,count=0;
    printf("Enter Number to find digits: ");
    scanf("%d",&num);
    for(i=1;num>=1;i++){
      num/=10;
      count++;
    }
    printf("%d",count);
}
