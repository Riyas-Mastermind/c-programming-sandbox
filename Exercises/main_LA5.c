/*
Description
    Name: M Mohammed Riyaz
    Date: 30/10/2025
    1. Write a program to find the sum of even digits and odds ?

    INPUT: 12345; 
    OUTPUT: Sum of Even digits = 6;
            Sum of Odd digits = 9;
*/ 


#include <stdio.h>

int main(){
  int num;
  int sum1 = 0;
  int sum2 = 0;
  printf("Enter the number: \n");
  scanf("%d", &num);
  
  for(int i = 0; i<=num; i++)
  {
    int rem = num%10;
    num /= 10;
    if(rem % 2 == 0)
    {
      sum1 += rem;
    }
    else
    {
      sum2 += rem;
    }
  }
  printf("Sum of even digits = %d",sum1);
  printf("Sum of odd digits = %d",sum2);
  
  return 0;
}
    