/*
Description
    Name: M Mohammed Riyaz
    Date: 8/11/2026

    4. Calculate Average with Floating-Point Precision
    
    Problem Statement: 
       Write a program that calculates the average of an array of integers. 
       Ensure that explicit type casting (float)sum / size is used instead 
       of integer division to preserve fractional results.

    Input: 
        Enter the size: 3
        Enter the array elements: 10 15 20

    Output:
        Average = 15
*/

#include<stdio.h>

int main()
{
    int size;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];

    int sum;

    printf("Enter the array of elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];    
    }

    printf("Average -> %g\n", (float)sum/size);

    return 0;
}