/*
Description
    Name: M Mohammed Riyaz
    Date: 26/10/2025
    2. Write a program to Reverse a Positive number ?
*/ 

#include <stdio.h>

int num, rev = 0;

int main()
{
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num < 0)
    {
        printf("Please enter a positive integer\n");
        return -1;
    }
    
    while(num!=0)
    {
        int rem = num%10;
        rev = (rev*10)+rem;
        num /= 10;
    }
    printf("Reversed number is %d", rev);
    return 0;
}