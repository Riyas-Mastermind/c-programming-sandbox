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

    for(int i=num; i>0; i--)
    {
        rev = num % 10;
        num /= 10;
        printf("%u", rev);
    }
}


//first let we try store a number in num veriable.
//secound make that % num ;