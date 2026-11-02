/*
Description
    Name: M Mohammed Riyaz
    Date: 31/10/2025
    
    1. Problem Statement: 
            You are given an integer 'N' representing the number of rows. 
            Write a program that prints an alphabet triangle pattern of 'N' lines.  
             
            For each row 'i' (where 'i' ranges from 1 to 'N'): 
                The row starts with the 'i-th' uppercase letter of the English alphabet (e.g., row 1 is 'A', row 2 is 'B', row 3 is 'C', etc.).
                It then prints letters backward sequentially down to 'A'. 
                Each character in the row should be separated by a single space.
                
                Input: An integer 'N' (1 <= N <= 26) representing the number of lines.

                Output: A
                        B A
                        C B A
                        D C B A
                        E D C B A
*/ 

#include<stdio.h>

int main()
{
    int lines; //rows
    char chr = 'A';

    printf("Enter the No. of Lines: ");
    scanf("%d", &lines);

    int i, j;
    for(i = 1; i <= lines; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(i == 1 && j == 1)
            {
                printf("%c ", chr);
            }

            else if(i > 1 && j == 1)
            {
                chr = chr + (i-1);
                printf("%c ",chr);
            }
            
            else
            {
                printf("%c ", --chr);
            }
        }
        printf("\n");
    }
    return 0;
}