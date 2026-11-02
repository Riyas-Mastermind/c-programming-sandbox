/*
Description
    Name: M Mohammed Riyaz
    Date: 1/11/2025
    1. Write a program to check whether a given number is an Abundant Number ?
    
    Input: 12
    Output: This is an Abundant Number.
    
    -> The proper divisors of 12 are 1, 2, 3, 4, and 6. Adding them gives 1+2+3+4+6 = 16, 
        which is greater then 12, So 12 is an Abundant Number.
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
  
  if(sum > num)
  {
    printf("%d is an Abundant Number.\n", num);
  }
  else
  {
    printf("%d is not an Abundant Number. \n", num);
  }
  
  return 0;
}