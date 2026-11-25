/*
Description
    Name: M Mohammed Riyaz
    Date: 25/11/2025
   
   	Write a C program to compute a new array where each element at index i is equal to the product of all elements 
    in the input array except the element at index i.

    Constraints
        1 <= size <= 1000 (or within safe memory/array bounds).
        Array elements and intermediate/final products fit within standard integer limits (int or long long as appropriate).
        Do not use division to compute the result (handle zeros naturally).

    Input: 
        size: 4
        array: 1 2 3 4

    Output: 
        array: 24 12 8 6
*/

#include<stdio.h>

void mult(int arr[], int size)
{
    int left[size];
    int right[size];

    left[0] = 1;
    for(int i = 1; i < size; i++)
    {
        left[i] = left[i - 1] * arr[i - 1];
    }

    right[size - 1] = 1;
    for(int i = size - 2; i >= 0; i--)
    {
        right[i] = right[i + 1] * arr[i + 1];
    }

    printf("Update array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", left[i] * right[i]);
    }
    printf("\n");
}

int main()
{
    int size;
    printf("Enter the size of array: ");
    if(scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Error: Invalid Input.\n");
        return 1;
    }

    int arr[size];

    printf("Enter the Elements of array: ");

    for(int i = 0; i < size; i++)
    {
        if(scanf("%d", &arr[i]) != 1)
        {
            printf("Error: Invalid Input.\n");
            return 1;
        }
    }
    
    mult(arr, size);

    return 0;
}