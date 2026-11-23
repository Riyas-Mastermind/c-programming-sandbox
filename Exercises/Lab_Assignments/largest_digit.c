/*
Description
    Name: M Mohammed Riyaz
    Date: 10/11/2025

    Write a program to find the largest digit present in a given integer.

    For the number 4829, let's look at all of its individual digits: 4, 8, 2, and 9. 
    Comparing them, 9 is the highest value among them. Therefore, the largest digit is 9.
    
    INPUT: 4829;

    OUTPUT: 9 is a Largest Digit;
*/

#include<stdio.h>

int main()
{
    int num, rem1, rem2;
    printf("Enter a numbers: ");
    scanf("%d", &num);

    rem1 = num % 10;
    num /= 10;

    while(num)
    {
        rem2 = num % 10;
        num /= 10;
        if(rem2 > rem1)
        {
            rem1 = rem2;
        }
        else
        {
            continue;
        }
    }

    printf("Largest Digit: %d\n", rem1);

    return 0;
}