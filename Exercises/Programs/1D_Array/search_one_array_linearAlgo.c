/*
Name: M Mohammed Riyaz
Date: 21/11/2026 @12:35 PM

Problem Statement: Search an Element in an Array

    Given an integer array arr of size N, and a target integer X, determine whether X is 
    present in the array.

    Constraints:
        1 <= N <= 10^5
        -10^9 <= arr[i] <= 10^9

    Example 1:
        Input: 
            Size: 5
            Array elements: 12 45 7 23 89
            Search: 23

        Output:
            Available
*/

#include<stdio.h>
#include<stdbool.h>

void search(int arr[], int arr_size, int search)
{
    bool flag = false;
    for(int i = 0; i < arr_size; i++)
    {
        if(arr[i] == search)
        {
            flag = true;
            printf("The element %d is present in the array (at index %d, using 0-based indexing).\n", arr[i], i);
            break;
        }
    }
    if(flag == false)
        printf("The element %d does not appear anywhere in the array.\n", search);
}

int main()
{
    int size;

    printf("Enter the size of array: ");
    if(scanf("%d", &size) != 1)
    {
        printf("You Are Entered Invalid Size Value.\n");
        return -1;
    }

    if(size <= 0)
    {
        printf("You Are Entered Invalid Size Value.\n");
        return -1;
    }

    int arr[size];

    printf("Enter the array of elements: ");
    
    for(int i = 0; i < size; i++)
    {
        if(scanf("%d", &arr[i]) != 1)
        {
            printf("You Are Entered Invalid Array Element Value.\n");
            return -1;
        }
    }
    
    int x;

    printf("Which value I need to search in this array ?: ");
    if(scanf("%d", &x) != 1)
    {
        printf("You Are Entered Invalid Search Value.\n");
        return -1;
    }
    
    search(arr, size, x);

    return 0;
}