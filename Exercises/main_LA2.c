/*
Description
    Name: M Mohammed Riyaz
    Date: 30/10/2025
    1. Write a program that checks wether a given number is a spy number. ?

    INPUT: 1124 -> OUTPUT: Spy Number.
    INPUT: 4567 -> OUTPUT: Is not a Spy Number.
*/ 

#include<stdio.h>

int main()
{
  int num;
  int sum = 0;
  
  printf("Enter the No. of values: ");
  scanf("%d", &num);
  int temp = num;
  
  while(num)
  {
    int rem = num % 10;
    num /= 10;
    sum += rem;
  }
    if(temp % sum == 0)
    {
      printf("Nive Number\n");
    }
    else
    {
      printf("Is not a Niven Number\n");
    }
  return 0;
}