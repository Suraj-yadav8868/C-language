// Question:

// WAP to convert temperature from degrees Celsius to Fahrenheit using the formula:

#include<stdio.h>

void main(){
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0/5.0 * celsius) + 32;

    printf("\nTemperature in Fahrenheit = %.2f", fahrenheit);
}
