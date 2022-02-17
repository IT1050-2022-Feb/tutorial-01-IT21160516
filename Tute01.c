/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
//function main begins program execution.
int main() 
{
  //variable declaration.
  float subject_1, subject_2, average;

  printf("Enter the marks of subject 01 : ");//prompt
  scanf("%f",&subject_1);//read user input.

  printf("Enter the marks of subject 02 : ");//prompt
  scanf("%f",&subject_2);//read user input

  average = (subject_1 + subject_2)/2.0; //calculate the average.

  printf("Average = %.2f",average);//display the average of the two marks.
  
  return 0;
}//end of the main function.