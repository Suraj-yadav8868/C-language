//Write a C program that defines a function to print only odd elements from 1D array elements.
#include <stdio.h>

void printOdd(int arr[], int n) {
    int i;

    printf("Odd eliments is  :\n");

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
}
  

int main() {
    int arr[10], i;

    printf("Enter 10 eliment:\n");

    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printOdd(arr, 10);

}
