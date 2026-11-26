/*
Description
    Name: M Mohammed Riyaz
    Date: 25/11/2025

    Given an integer N and a list of N integers, write a C program to sort the elements in ascending order 
    using the Bubble Sort algorithm, eliminate all duplicate values, and output the remaining unique elements 
    in sorted order.
    
    constraints:
        N >= 1 (handle N <= 0 gracefully if applicable).
        Elements can be standard signed integers (int) and may contain duplicates or unsorted values.
        Sorting must be performed using Bubble Sort.

    INPUT: 
        Size: 8
        Array: 4 2 7 2 4 9 7 1
        Intermediate (After Bubble Sort): 1 2 2 4 4 7 7 9

    OUTPUT: 
        1 2 4 7 9
*/
#include<stdio.h>
#include<stdbool.h>

bool read_array(int arr[], int arr_size)
{
    for(int i = 0; i < arr_size; i++)
    {
        if(scanf("%d", &arr[i]) != 1)
        {
            printf("You have entered invalid Elements value.\n");
            return false;
        }
    }
    return true;
}

void print(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void sort_arr(int arr[], int arr_size)
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
    print(arr, arr_size);
}

void duplicate(int arr[], int arr_size)
{
    for(int i = 0; i < arr_size-1; i++)
    {
        if(arr[i] != arr[i+1])
        {
            printf("%d ", arr[i]);
        }
    }
    printf("%d\n", arr[arr_size-1]);
}

int main()
{
    int size;
    printf("Enter the size of array: ");
    if(scanf("%d", &size) != 1 || size <= 0)
    {
        printf("You have entered invalid size value.\n");
        return 1;
    } 

    int arr[size];

    printf("Enter the Array of Elements: ");
    if(!read_array(arr, size))
    {
        return -1;
    }

    printf("After Bubble Sort: ");
    sort_arr(arr, size);

    printf("After removing duplicate: ");
    duplicate(arr, size);

    return 0;
}