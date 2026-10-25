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
    
    // --- INSPECT HOW THEY ARE STORED ---
    printf("num1, num2 -> Decimal: %d, %d\nnum1, num2 -> Hexdecimal: 0x%X, 0x%X\nnum1, num2 -> Octal: 0%o, 0%o\n", num1, num2, num1, num2, num1, num2);

    // --- Print the memory addresses using %p ---
    printf("Memory address of num1: %p\n", (void *)&num1);
    printf("Memory address of num2: %p\n", (void *)&num2);
    /*  1. %p prints hex addresses: The output(0x589ce6f01014) is a hexadecimal memory address
            assigned by operating system when the variable was cerated.
        2. Notice the gap: Look at the last characters(0x589ce6f01014 vs 0x589ce6f01018). Since
            an int takes up 4 bytes of memory on most modern systems, num2 is stored 4 memory
            slots right after num1 !
        3. (void *)&num1 is a type cast. it is used to explicitly convert integer pointer (int *)
            into a generic pointer(void *) to satisfy the strict rules of the %p format specifier.
    */

    printf("Sum of two integer: %i %d\n", num1+num2, num1+num2);
    /*  In printf(), %d and %i are 100% identical.
        1. Both stand for "integer."
        2. Both expect an int value and print it out as a standard decimal number (base 10).
        3. We usually just use %d out of habit, but %i works in the exact same way here.
    */

    return 0;
}