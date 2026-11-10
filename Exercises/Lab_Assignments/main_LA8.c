/*
Description
    Name: M Mohammed Riyaz
    Date: 10/11/2025

    Write a program to check whether a given number is an Armstrong Number.

    (Note: An Armstrong number (or narcissistic number) is a number that is equal to 
    the sum of its own digits each raised to the power of the total number of digits. 
    For example, for a 3-digit number, each digit is cubed).
    
    For 153, it is a 3-digit number. Let's take each digit, cube it (raise it to the power of 3), 
    and add them together:
    
    1^3 = 1 x 1 x 1 = 1
    5^3 = 5 x 5 x 5 = 125
    3^3 = 3 x 3 x 3 = 27
    
    Adding them gives 1 + 125 + 27 = 153. Since the sum equals the original number, 
    153 is an Armstrong Number.

    INPUT: 153;

    OUTPUT: Armstrong Number;
*/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Numbers: ");
    scanf("%d", &num);

    int count = 0;
    int temp = num;
    int sum = 0;

    while(temp)
    {
      temp /= 10;
      count++;
    }

    temp = num;

    while(temp)
    {
      int rem = temp % 10;
      temp /= 10;
      int arm = 1;
      for(int i = 1; i <= count; i++)
      {
         arm *= rem;
      }
      sum += arm;
    }

    if(sum == num)
      printf("%d is an Armstrong Number. \n", num);
    else
      printf("%d is not an Armstrong Number. \n", num);

    return 0;
}