/*
Description
    Name: M Mohammed Riyaz
    Date: 10/11/2025

    Write a C program that accepts a positive integer N and calculates the sum of all 
    numbers from 1 to N. However, numbers divisible by both 3 and 5 must be excluded 
    from the sum. Display the final sum.

    For N = 50, exclude the numbers 15, 30, and 45 because they are divisible by both 3 and 5.  
    
    INPUT: 50;

    OUTPUT: Sum = 1185;
*/

#include<stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        if((i % 3 != 0) || (i % 5 != 0))
            sum += i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}