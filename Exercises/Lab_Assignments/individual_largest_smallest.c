/*
Description
    Name: M Mohammed Riyaz
    Date: 11/11/2025

    Write a C program to find the largest and smallest digit for each individual integer element 
    inside an array. For every number in the array, examine its digits to identify the maximum 
    and minimum digit.
    
    INPUT:  Array = 817 6117 987 7 616 111

    OUTPUT: For 817: L=8, S=1

            For 6117: L=7, S=1

            For 987: L=9, S=7

            For 7: L=7, S=7

            For 616: L=6, S=1

            For 111: L=1, S=1. 
*/

#include<stdio.h>

int main()
{
    int size;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the array elements: ");

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int j = 0; j < size; j++)
    {
       int temp = arr[j];
       int last_digit = temp % 10;
       int L = last_digit;
       int S = last_digit;

       temp /= 10;

       while(temp > 0)
       {
        int rem = temp % 10;

        if(rem > L)
            L = rem;
        
        if(rem < S)
            S = rem;

        temp /= 10;
       }

       printf("L = %d, S = %d\n", L, S);
    }

    return 0;
}