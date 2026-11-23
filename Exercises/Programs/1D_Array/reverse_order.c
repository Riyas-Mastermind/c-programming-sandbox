/*
Name: M Mohammed Riyaz
Date: 21/11/2026 @2:25 PM

Problem Statement: Search an Element in an Array

    Given an integer array arr of size N, print all elements of the array starting from the last
    element down to the first elements. 

    Constraints:
        1 <= N <= 10^5
        -10^9 <= arr[i] <= 10^9

    Example 1:
        Input: 
            Size: 5
            Array elements: 10 20 30 40 50

        Output:
            50 40 30 20 10
*/

#include<stdio.h>

void reverse(int arr[], int arr_size)
{
    for(int i = 0, j = arr_size-1; i < j; i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    int size;

    printf("Enter the size of array: ");
    if(scanf("%d", &size) != 1)
    {
        printf("You Are Entered Invalid Size value.\n");
        return -1;
    }

    if(size <= 0)
    {
        printf("You Are Entered Invalid Size value.\n");
        return -1;
    }

    int arr[size];

    printf("Enter the array of elements: ");
    for(int i = 0; i < size; i++)
    {
        if(scanf("%d", &arr[i]) != 1)
        {
            printf("You Are Entered Invalid Array value.\n");
            return -1;            
        }
    }

    reverse(arr, size);

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}