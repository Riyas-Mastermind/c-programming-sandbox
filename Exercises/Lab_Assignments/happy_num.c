/*
Description
    Name: M Mohammed Riyaz
    Date: 27/10/2025
    1. Write a program to check whether a given number is Happy Number ?
    
    Input: 19
    Output: Happy Number
    
    -> For 19: 1^2+9^2 = 82, then 8^2+2^2 = 68, then 6^2+8^2 = 100, then 1^2+0^2+0^2 = 1. 
    Since the process end at 1, 19 is a Happy Number.
*/ 

#include<stdio.h>

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  int temp = num;
  int squ = 0;

  while(temp > 0)
  {
    int rem = temp % 10;
    temp /= 10;
    squ += (rem * rem);

    // When we finish extracting all digits of the current temp number:
    if (temp == 0)
    {
      if (squ == 1)
      {
        printf("This number is Happy.\n");
        break;
      }
      // If it hits 4, it's trapped in the unhappy cycle
      else if (squ == 4)
      {
        printf("This number is Unhappy.\n");
        break;
      }
      // Otherwise, reset temp to our new sum and keep going
      else
      {
        temp = squ;
        squ = 0;
      }
    }
  } 
  return 0;
}