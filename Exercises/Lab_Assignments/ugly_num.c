/*
Description
    Name: M Mohammed Riyaz
    Date: 10/11/2025

    Write a C program to check whether a given positive integer is an Ugly Number.

    (Note: An ugly number is defined as a positive integer whose prime factors are strictly 
    limited to 2, 3, and 5. By mathematical convention, 1 is also treated as an ugly number 
    since it has no prime factors).

    6 is ugly because its prime factorization is 2 x 3 (its factors consist only of 2 and 3).
    1 is ugly because it has no prime factors.
    14 is NOT ugly because its prime factorization is 2 x 7. Since 7 is a prime factor outside 
    of 2, 3, and 5, it fails the condition.

    INPUT: 6;

    OUTPUT: 6 is an Ugly Number.
*/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 0)
    {
        printf("Invalid Input.\n");
        return -1;
    }

    while(num % 2 == 0)
    {
        num /= 2;
    }

    while(num % 3 == 0)
    {
        num /= 3;
    }

    while(num % 5 == 0)
    {
        num /= 5;
    }

    if (num == 1)
    {
        printf("It is an Ugly Number.\n");
    }
    else
    {
        printf("It is not an Ugly Number.\n");
    }
    
    return 0;

}
