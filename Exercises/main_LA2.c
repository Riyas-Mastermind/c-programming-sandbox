/*
Description
    Name: M Mohammed Riyaz
    Date: 30/10/2025
    1. Write a program that checks wether a given number is a Niven Number. ?

    INPUT: 18 -> sum -> 1+8 => 9; 18 % 9 == 0; then this Niven Number;
    INPUT: 19 -> sum -> 1+9 => 10; 19 % 10 != 0; then this is not Niven Number;
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