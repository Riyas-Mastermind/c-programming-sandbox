/*
Description
    Name: M Mohammed Riyaz
    Date: 2/11/2025
    In programming and number theory, a magic number is a number where you repeatedly find the sum of its digits until a single digit is left. 
    If that final single digit is 1, the number is declared a magic number.

    INPUT: 1729;

    OUTPUT: Magic Number;
*/

#include<stdio.h>

int main()
{
  int num = 1729;
  int sum = 0;
  int temp = num;
  
  while(temp)
  {
    int rem = temp % 10;
    temp /= 10;
    sum += rem;
    
    if(temp == 0)
    {
      temp = sum;
      sum = 0;
    }
    else if(sum == 1 || (temp == 1 && sum == 0))
    {
      printf("%d is a Magic Number.\n",num);
    }
  }
  if(sum != 1)
    printf("%d is not a Magic Number.\n",num);
  return 0;
} 