/*
Description
    Name: M Mohammed Riyaz
    Date: 1/11/2025
    1. Write a program to check whether a given year is a leap year or not ?
    
    Input: 2024
    Output: 2024 is a Leap Year.
    
    -> Given an integer year, write a function to determine whether it is a leap year or a common (non-leap) year.
        In the Gregorian calendar, a leap year has 366 days instead of the usual 365, adding an extra day to the end of February (February 29th). 
        
        The rules to determine a leap year are as follows:
            1. The year must be evenly divisible by 4.
            2. If the year is evenly divisible by 100, it is not a leap year, unless it is also evenly divisible by 400.
*/ 


#include<stdio.h>

int main()
{
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);
  
  if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
  {
    printf("%d is a Leap Year\n", year);
  }
  else
  {
    printf("%d is not a Leap Year\n", year);
  }
  
  return 0;
}