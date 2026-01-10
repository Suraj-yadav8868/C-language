// Develop a C program to **find the sum of digits** of a given number


#include<stdio.h>

void main(){
    int num,sum=0;
    printf("Enter Number to find digits: ");
    scanf("%d",&num);
   
    while(num>0){
     int result =num%10;
      sum+=result;
      num/=10;
    }
    printf("%d",sum);
}