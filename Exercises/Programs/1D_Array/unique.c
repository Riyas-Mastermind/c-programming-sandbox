/*
Name: M Mohammed Riyaz
Date: 27/11/2026 @9:45 AM

Problem Statement: Check Whether an Array Has All Unique Elements

    Given an integer array arr of size n, determine whether all elements in the array are distinct (no element appears more than once).

    Constraints:
        1 <= N <= 10^5
        -10^9 <= arr[i] <= 10^9

    Example 1:
        Input: 
            Size: 5
            Array elements: 4 9 1 7 2

        Output:
            Palindrome
*/

#include<stdio.h>
#include<stdbool.h>

void unique(int arr[], int size)
{
    bool flag = true;
    for(int i = 0; i < size-1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            printf("Not Unique.\n");
            flag = false;
            break;
        }
    }
    if(flag)
        printf("Unique.\n");
}

void find_unique(int arr[], int arr_size)
{
    for(int i = 0; i < arr_size-1; i++)
    {
        bool flag = true;
        for(int j = 0; j < arr_size-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag)
            break;
    }
    unique(arr, arr_size);
}

int main()
{
    int size;
    printf("Enter the size of array: ");
    if(scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Error: Invalid Size.\n");
        return 1;
    }

    int arr[size];

    if(size == 1)
    {
        printf("Enter the Array Element: ");
        if(scanf("%d", &arr[0]) != 1)
        {
            printf("Error: Invalid Array Element.\n");
            return 1;
        }
        printf("Unique.\n");
        return 0;
    }

    printf("Enter the Array Elements: ");
    for(int i = 0; i < size; i++)
    {
        if(scanf("%d", &arr[i]) != 1)
        {
            printf("Error: Invalid Array Element.\n");
            return 1;
        }
    }

    find_unique(arr, size);

    return 0;
}