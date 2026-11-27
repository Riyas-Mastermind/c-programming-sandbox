/*
Name: M Mohammed Riyaz
Date: 27/11/2026 @9:25 AM

Problem Statement: Check Whether an Array Is a Palindrome

    Given an integer array arr of size n, determine whether the array reads the same forward and backward.

    Constraints:
        1 <= N <= 10^5
        -10^9 <= arr[i] <= 10^9

    Example 1:
        Input: 
            Size: 5
            Array elements: 1 2 3 2 1

        Output:
            Palindrome
*/

#include<stdio.h>
#include<stdbool.h>

void check_pal(int arr[], int arr_size)
{
    bool flag = true;
    for(int i = 0, j = arr_size-1; i < j; i++, j--)
    {
        if(arr[i] != arr[j])
        {
            printf("Not Palindrome.\n");
            flag = false;
            break;
        }
    }
    if(flag)
        printf("Palindrome.\n");
}

int main()
{
    int size;
    printf("Enter the Size of array: ");
    if(scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Error: Invalid Size.\n");
        return 1;
    }

    int arr[size];

    if(size == 1)
    {
        printf("Enter the Array Elements: ");
        scanf("%d", &arr[0]);
        printf("Palindrome.\n");
        return 0;
    }

    printf("Enter the Array Elements: ");
    for(int i = 0; i < size; i++)
    {
        if(scanf("%d", &arr[i]) != 1)
        {
            printf("Error: Invalid Array Elements.\n");
            return 1;
        }
    }

    check_pal(arr, size);

    return 0;
}