/*
Q.4 Sum of Elements in Row & Column of 2D Array

Problem Statement:
Develop a program to print and find the sum of all elements of a given row
and a given column from a 2D array.

Example:
Input:
Enter the array's row size: 3
Enter the array's column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6

Output:
Enter row number: 0
Elements of row 0: 2 7 1
The sum of row 0: 10

Enter column number: 2
Elements of column 2: 1 4 6
The sum of column 2: 11
*/

#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);

    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols];

    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int rowNum, colNum;
    int rowSum = 0, colSum = 0;

    // Row sum
    printf("\nEnter row number: ");
    scanf("%d", &rowNum);

    printf("Elements of row %d: ", rowNum);
    for (j = 0; j < cols; j++) {
        printf("%d ", a[rowNum][j]);
        rowSum += a[rowNum][j];
    }
    printf("\nThe sum of row %d: %d\n", rowNum, rowSum);

    // Column sum
    printf("\nEnter column number: ");
    scanf("%d", &colNum);

    printf("Elements of column %d: ", colNum);
    for (i = 0; i < rows; i++) {
        printf("%d ", a[i][colNum]);
        colSum += a[i][colNum];
    }
    printf("\nThe sum of column %d: %d\n", colNum, colSum);

    return 0;
}
