//Implement a C program to find an average and a grade of a student. 
// Consider 5 subjects. Assign out of 100 marks for each subject. 
// Use conditions for evaluate grades based on average value.

#include <stdio.h>
int main()    {
     int marks[5], i, total = 0;
float average; 

  printf("Enter marks of 5 subjects:\n");
     for(i = 0; i < 5; i++) {
         scanf("%d",  &marks[i]);
        total += marks [i];
         }
      average = total /  5.0;

    printf ("Average = %.2f\n",  average);

    if (average >= 90)
        printf("Grade: A");
     else if(average >= 75)
        printf("Grade: B");
     else if(average >= 60)
        printf("Grade: C");
      else if(average >= 40)
        printf("Grade: D");
       else
        printf("Grade: Fail");

}
