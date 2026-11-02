/*
Description
    Name: M Mohammed Riyaz
    Date: 2/11/2025
    
    2. Problem Statement: 
            You are given an integer 'N' representing the number of rows. 
            Write a program to print a centered pyramid (triangle) of height 'N' consisting of alternating binary digits (1 and 0).
            For each row 'i' (where 'i' ranges from '1' to 'N'): The row is padded with leading spaces to maintain a centered pyramid alignment.
            It prints an alternating sequence of binary digits starting with 1 (i.e., 1, 101, 10101, etc.).
            The total count of digits in row i increases by 2 with each subsequent row (following the formula 2i - 1).

                Input: An integer 'N' (1 <= N <= 20) representing the number of rows.

                Output: Enter the No. of Lines: 5
                                1 
                              1 0 1 
                            1 0 1 0 1 
                          1 0 1 0 1 0 1 
                        1 0 1 0 1 0 1 0 1 
*/ 

#include <stdio.h>

int main()
{
  int n; // no. of lines.
  printf("Enter the No. of lines: ");
  scanf("%d", &n); // read the input from user.
  
  int m = 2*n-1; //no. of rows.
  int nsp = m/2; // no. of space initial stage.
  int nst = 1; // no. of print (%d or %c) initial stage.
  int ml = m/2 + 1; // middle line of total lines.
 
  
  for(int i = 1; i <= n; i++) //Outer loop with lines
  {
    int state = 0; //print (0 or 1) toggle.
    for(int j = 1; j <= nsp; j++) //1. inner loop with space.
    {
      printf(" ");
    }
    
    for(int k = 1; k <= nst; k++) //2. inner loop with print message toggle.
    {
      state = 1 - state; //toggle.
      printf("%d", state);
    }
    
    printf("\n"); //new lines
    
    if(i < m)
    {
      nsp--; //No. of Spaces Decreasing
      nst += 2; //No. of Characters Increasing
    }
  }
  
  return 0;
}  