/*
Description
    Name: M Mohammed Riyaz
    Date: 26/10/2025
    2. Write a program to Reverse a Positive number ?
*/ 

#include<stdio.h>

unsigned int num;
unsigned int rev = 0;

int main()
{
    printf("Enter a number: ");
    scanf("%u", &num);
    //printf("Enter a No of digits: ");
    //scanf("%u", &limit);

    while(num!=0)
    {
        int rem = num % 10;
        rev = (rev*10) + rem;
        num /= 10;
   
    }
    printf("%u\n", rev);
    
    return 0;
}