//Write a C program to find even elements from an 1D array using Pointer.
#include <stdio.h>
int main() {
     int arr[10], i;
    int *ptr;
    ptr = arr;
 printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", ptr + i);  
    }
    printf("Even elements are:\n");
    for(i = 0; i < 10; i++) {
        if(*(ptr + i) % 2 == 0)
            printf("%d ", *(ptr + i));
    }                                   
}
