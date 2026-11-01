/*
Description
    Name: M Mohammed Riyaz
    Date: 27/10/2025
    1. Write a program to check whether a given number is a Duck Number ?
    
    Input: 3405
    Output: This is a Duck Number
    
    -> In 3405, the digits after the first digits are 4, 0, and 5. 
        Since 0 appreares among these digits, 3405 is a Duck Number.
*/ 

#include<stdio.h>

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  
  int rem;
  while(num)
  {
    rem = num % 10;
    num /= 10;
    if(rem == 0)
    {
      printf("This is a Duck Number.\n");
      break;
    }
  }
  if(rem > 0)
  {
    printf("This is not a Duck Number.\n");
  }
  return 0;
}