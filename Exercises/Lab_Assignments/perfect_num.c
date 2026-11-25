/*
Description
    Name: M Mohammed Riyaz
    Date: 25/11/2025
   
   	Write a C program to determine whether a given integer is a perfect number. A perfect number is a positive integer that 
    is equal to the sum of its proper positive divisors (all positive divisors of the number excluding the number itself).

	Example 1:
        Input: 6
        Output: 6 is a perfect number.
        Explanation: Proper divisors of 6 are 1, 2, and 3. Their sum is 1 + 2 + 3 = 6.

	Constraints
        n should fit within a standard signed int range.
        Negative numbers, 0, and 1 are not perfect numbers.
*/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Error: Invalid Input\n");
        return -1;
    }

    int sum = 0;

    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
            sum += i;
    }
    if (sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    return 0;
}