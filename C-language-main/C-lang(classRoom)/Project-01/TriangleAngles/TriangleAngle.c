// Question:

// WAP to find the third angle of a triangle when the other two angles are given.

#include<stdio.h>

void main(){
    int a1, a2, a3;

    printf("Enter first and second angle: ");
    scanf("%d %d", &a1, &a2);

    a3 = 180 - (a1 + a2);

    printf("\nThird angle of the triangle = %d", a3);
}
