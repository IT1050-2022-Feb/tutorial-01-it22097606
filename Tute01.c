/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1,m2,avg;

  printf("Enter subject 1 marks:");
  scanf("%d", &m1);
  printf("Enter subject 2 marks:");
  scanf("%d", &m2);
  
  avg=(m1+m2)/2;
  printf("average is:%d", avg);
  return 0;
}

