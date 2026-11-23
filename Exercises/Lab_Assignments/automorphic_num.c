/*
Description
    Name: M Mohammed Riyaz
    Date: 2/11/2025
    This program is designed to check whether a specific number (in this case, 376) is an Automorphic Number (a number whose square ends in the number itself).

    INPUT: 376;

    OUTPUT: Automorphic Number;
*/

#include<stdio.h>

int main()
{
  int num = 376;
  
  int temp = num;
  int rem;
  
  rem = temp*temp;
    
  int aut = rem/num;
    
  if(aut == num)
    printf("%d is an Automorphic Number.\n",num);
  else
    printf("%d is not an Automorphic Number.\n",num);
    
  return 0;
} 