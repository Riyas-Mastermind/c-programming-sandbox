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
  int pro = 1;

  printf("Enter the No. of values: ");
  scanf("%d", &num);
  
  while(num)
  {
    int rem = num % 10;
    num /= 10;
    sum = sum + rem;
    pro = pro * rem;
  }

  if(sum == pro)
    {
      printf("Spy Number\n");
    }
    else
    {
      printf("Is not a Spy Number\n");
    }
    
  return 0;
}