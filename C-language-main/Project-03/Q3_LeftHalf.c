// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5

#include<stdio.h>

void main(){
    int i,j,num;

    for(i=5;i>=1;i--){
        num=i;
        for(j=i;j<=5;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}
