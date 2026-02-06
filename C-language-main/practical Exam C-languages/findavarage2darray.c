//Write a C program to find the average of all elements in a 2D array using a function
#include <stdio.h>

float avg(int a[3][3])
{
    int i, j;
    int total = 0;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            total = total + a[i][j];
        }
    }

    return (float)total / 9;
}

int main()
{
    int a[3][3];
    int i, j;

    printf("Enter 3x3 matrix elements:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Average = %.2f", avg(a));

}

