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
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  int temp = num;
  int sum = 0;

  while(temp)
  {
    int rem = temp % 10;
    temp /= 10;
    sum += rem;

    if(temp == 0 && sum != 1)
    {
      if(sum <= 9)
      {
        printf("%d is not a magice number.\n", num);
        break;
      }
      else if(sum > 9)
      {
        temp = sum;
        sum = 0;
      }
    }
    else if(temp == 0 && sum == 1)
      printf("%d is a magic number.\n", num);

  }
  
  return 0;
}