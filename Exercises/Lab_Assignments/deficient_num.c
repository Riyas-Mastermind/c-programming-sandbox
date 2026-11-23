/*
Description
    Name: M Mohammed Riyaz
    Date: 1/11/2025
    1. Write a program to check whether a given number is an Deficient Number ?
    
    Input: 10
    Output: This is an Deficient Number.
    
    -> The proper divisors of 10 are 1, 2, and 5. Adding them gives 1+2+5 = 8, 
        which is less then 10, So 10 is an Deficient Number.
*/ 

#include<stdio.h>

int main()
{
  int num;
  printf("Enter a Number: ");
  scanf("%d", &num);

  int i, sum = 0;
  for(i = 1; i < num; i++)
  {
    if(num % i == 0)
    {
      sum = sum + i;
    }
  }
  
  if(sum < num)
  {
    printf("%d is an Deficient Number.\n", num);
  }
  else
  {
    printf("%d is not an Deficient Number.\n", num);
  }
  
  return 0;
}