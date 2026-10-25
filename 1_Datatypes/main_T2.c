/*
Description
    Name: M Mohammed Riyaz
    Date: 25/10/2025
    2. Write a program to find sum of two integers ?
*/ 

#include<stdio.h>

int num1, num2;

int main()
{
    printf("Enter the num1 value: ");
    scanf("%d", &num1);
    /*  %d(Decimal Only): Strictly expects a base-10 decimal number. if the user types a
        number starting with zero (like 052), %d still treats it as regular decimal 52.
    */

    printf("Enter the num2 value: ");
    scanf("%i", &num2);
    /*  %i(Integer with Auto-Detection): Automatically detects the base of the number
        based on its prefix:

        1. if it starts with no prefix(e.g.., 42), it treats it as decimal (base 10).
        2. if it starts with a 0 (e.g.., 052), it treats it as octal (base 8) and converts it.
        3. if it starts with 0x or 0X (e.g.., 0x2A), it treats it as hexadecimal (base 16) and converts it
    */

    printf("Sum of two integer: %i %d\n", num1+num2, num1+num2);
    /*  In printf(), %d and %i are 100% identical.
        1. Both stand for "integer."
        2. Both expect an int value and print it out as a standard decimal number (base 10).
        3. We usually just use %d out of habit, but %i works in the exact same way here.
    */

    return 0;
}