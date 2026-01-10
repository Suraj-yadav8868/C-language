// Question:

// WAP to calculate the Gross Salary of an employee by adding HRA, DA, and TA percentages to the basic salary entered by the user.

#include<stdio.h>

void main(){
    float basic, hra, da, ta, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;   
    da  = basic * 0.10;  
    ta  = basic * 0.05;  

    gross = basic + hra + da + ta;

    printf("\nGross Salary = %.2f", gross);
}
