/*
Description
    Name: M Mohammed Riyaz
    Date: 30/10/2025
    1. Write a program that checks wether a given number is a Neon Number. ?

    INPUT: 9 -> 9*9 -> 81; sum -> 8+1 => 9; sum == input; then this Neon Number;
    else,
    then this is not Neon Number;
*/ 


#include<stdio.h>

int main()
{
  int num;
  int sum = 0;
  
  printf("Enter the Number: ");
  scanf("%d", &num);
  int temp = num*num;
  
  while(temp)
  {
    int rem = temp % 10;
    temp /= 10;
    sum += rem;
  }
  if(num == sum)
  {
    printf("Neon Number\n");
  }
  else
  {
    printf("Is not a Neon Number\n");
  }
  return 0;
}