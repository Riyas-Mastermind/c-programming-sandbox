/*
Name: M Mohammed Riyaz
Date: 21/11/2026 @11:55 AM

Problem Statement: Sum and Average of an Array

    Given an integer array arr of size N, calculate the sum of all elements in the array and 
    the average(arithmetic mean) of those elements.

    Constraints:
        1 <= N <= 10^5
        -10^9 <= arr[i] <= 10^9

    Example 1:
        Input: 
            Size: 5
            Array elements: 10 20 30 40 50

        Output:
            Sum: 150
            Average: 30.00
*/

#include<stdio.h>

int main()
{
    int size;
    long long int sum = 0;
    
    printf("Enter the size of array: ");
    if(scanf("%d", &size) != 1)
    {
        printf("You are entered Invalid Size\n");
        return -1;
    }

    if(size <= 0)
    {
        printf("You are entered Invalid Size\n");
        return -1;
    }

    int arr[size];

    printf("Enter the Array of Elements: ");
    for(int i = 0; i < size; i++)
    {
        if(scanf("%d", &arr[i]) != 1)
        {
            printf("You are entered Invalid Array Element.\n");
            return -1;
        }
        sum += arr[i];
    }

    printf("Sum: %lld\nAverage: %.2lf\n", sum, (double)sum/size);

    return 0;
}