/*
Description
    Name: M Mohammed Riyaz
    Date: 2/11/2025
    This program is designed to check whether the number 153 is an Armstrong number 
    (where the sum of each digit cubed equals the number itself: 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153).

    INPUT: 153;

    OUTPUT: Armstrong Number;
*/

#include<stdio.h>

int main()
{
  int num = 153;
  
  int temp = num;
  int rem;
  int sum = 0;
  
  for(int i = 1; i <= temp; i++)
  {
    int rem = temp%10;
    temp /= 10;
    sum += (rem*rem*rem);
  }
  if(temp == 1)
    sum += 1;
    
  if(sum == num)
    printf("%d is an Armstrong Number.\n",num);
  else
    printf("%d is not an Armstrong Number.\n",num);
    
  return 0;
}