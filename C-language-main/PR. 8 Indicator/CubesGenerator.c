#include <stdio.h>

/* Function Declaration */
void findCubes(int *ptr, int size);

int main()
{
    int size;
    int arr[10][10];

    printf("Enter array's size: ");
    scanf("%d", &size);

    printf("\nEnter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nCubes of all elements:\n");
    findCubes(&arr[0][0], size);

    return 0;
}

/* Function Definition */
void findCubes(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int value = *(ptr + i * size + j);
            printf("%d ", value * value * value);
        }
        printf("\n");
    }
}
