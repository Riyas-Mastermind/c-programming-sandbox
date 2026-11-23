/*
Description
    Name: M Mohammed Riyaz
    Date: 10/11/2025

    Write a program to check whether a given number is a Strong Number.
    (Note: A Strong Number is a number whose sum of the factorials of its digits is equal 
    to the number itself).
    
    For 145, let's find the factorial of each digit:
    1! = 1
    4! = 4 x 3 x 2 x 1 = 24
    5! = 5 x 4 x 3 x 2 x 1 = 120
    
    Adding them together gives 1 + 24 + 120 = 145. 
    Since the sum of the factorials equals the original number, 145 is a Strong Number.
    
    INPUT: 145;

    OUTPUT: Strong Number;
*/

#include<stdio.h>

int main()
{
    int num, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp)
    {
        int rem = temp % 10;
        temp /= 10;
        
        int fact = 1;
        for(int i = 1; i <= rem; i++)
        {
             fact *= i;
        }

        sum += fact;
    }

    if(sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);

    return 0;
}
