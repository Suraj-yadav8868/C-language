#include <stdio.h>

/* Function Declarations */
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modulus(int a, int b);

int main()
{
    int choice, num1, num2, result;

    while (1)
    {
        printf("\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for the exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Program exited successfully.\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice)
        {
        case 1:
            result = add(num1, num2);
            printf("Addition of %d and %d is %d\n", num1, num2, result);
            break;

        case 2:
            result = subtract(num1, num2);
            printf("Subtraction of %d and %d is %d\n", num1, num2, result);
            break;

        case 3:
            result = multiply(num1, num2);
            printf("Multiplication of %d and %d is %d\n", num1, num2, result);
            break;

        case 4:
            if (num2 == 0)
                printf("Division by zero is not allowed\n");
            else
            {
                result = divide(num1, num2);
                printf("Division of %d and %d is %d\n", num1, num2, result);
            }
            break;

        case 5:
            if (num2 == 0)
                printf("Modulus by zero is not allowed\n");
            else
            {
                result = modulus(num1, num2);
                printf("Modulus of %d and %d is %d\n", num1, num2, result);
            }
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

/* Function Definitions */
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int modulus(int a, int b)
{
    return a % b;
}
