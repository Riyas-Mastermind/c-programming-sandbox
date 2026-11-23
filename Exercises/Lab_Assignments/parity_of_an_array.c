/*
Description
    Name: M Mohammed Riyaz
    Date: 11/11/2025

    Write a C program to determine the parity of an array. For each element, if the element is 
    even, replace it with 0. If the element is odd, replace it with 1. After processing all 
    elements, treat the resulting array as a binary number and print its decimal value.

    INPUT:  Enter the number of elements: 5
            Array Elements: 2 7 10 5 8

    OUTPUT: Modified array: 0 1 0 1 0
            Result: 10
*/

#include<stdio.h>

int main()
{
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    printf("Array Elements: ");

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2)
            arr[i] = 1;
        else
            arr[i] = 0;
    }
    printf("\n");
    
    int sum = 0, base = 2;

    printf("Modified array: ");
    for(int j = 0; j < size; j++)
    {
        sum = (sum * base) + arr[j];
        printf("%d ", arr[j]);
    }
    printf("\n");

    printf("Result: %d\n", sum);
    
    return 0;
}