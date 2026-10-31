/*
Description
    Name: M Mohammed Riyaz
    Date: 31/10/2025
    
    2. Problem Statement: 
            You are given an integer 'N' representing the number of rows. Write a program that prints a centered, symmetric alphabet pyramid of 'N' lines.   
            For each row 'i' (where 'i' ranges from 1 to 'N'):
                The row is padded with leading spaces to maintain a centered pyramid structure.
                It prints uppercase English letters starting from 'A' up to the 'i-th' letter, and then mirrors/descends back down to 'A'.
                Each character in the row is separated by a space.

                Input: An integer 'N' (1 <= N <= 26) representing the number of rows.

                Output: Enter the No. of Lines: 5
                                A 
                              A B A 
                            A B C B A 
                          A B C D C B A 
                        A B C D E D C B A 
*/ 



#include<stdio.h>

int main() {

  int lines;
  int i, j, k;

  printf("Enter the No. of Lines: ");
  scanf("%d", &lines);
  
  for(i = 1; i <= lines; i++)
  { 
    char chr = 'A';
    for(j = 1; j <= lines; j++)
    {
      if(i+j <= lines)
      {
        printf("  ");
      }

      else
      {
        printf("%c ", chr++);
      }
    }

    chr--;

    for(k = i; k > 1; k--)
    {
      printf("%c ",--chr);
    }
    printf("\n");
  }
  return 0;
}