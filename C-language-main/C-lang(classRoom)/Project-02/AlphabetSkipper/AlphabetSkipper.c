// Problem Statement : Develop a program A to Z by 
// skipping 2 alphabets using a do-while loop.
// Ex: a,e,i,m,q

#include<stdio.h>

void main(){
    int i=1;
    char alpha=65;

    do{
      printf("%c ,",alpha);
      i++;
      alpha+=4;
    }while(i<=13);
}