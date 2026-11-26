/*
Description
    Name: M Mohammed Riyaz
    Date: 26/11/2025

    Given an integer N and an array of N integers, write a C program to sort the array in ascending order using Bubble Sort. 
    After sorting, find and print the first element in the sorted array that appears more than once (i.e., the smallest repeated value). 
    If no element is repeated, print No repeated element.
    
    constraints:
        N >= 1 (handle N < 2 gracefully, as no element can repeat with fewer than two elements).
        Elements are standard signed integers (int).
        Sorting must be performed using Bubble Sort. 

    INPUT: 
        Size: 7
        Array: 5 3 8 2 3 9 1
        Intermediate (After Bubble Sort): 1 2 3 3 5 8 9

    OUTPUT: 
        First repeated element: 3
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
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort_arr(int arr[], int size)
{
    for(int i = 0; i < size-1; i++)
    {
        bool flag = true;
        for(int j = 0; j < size-1-i; j++)
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
    print(arr, size);
}

void repeated(int arr[], int arr_size)
{
    bool flag = false;
    for(int i = 0; i < arr_size-1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            printf("First repeated element: %d\n", arr[i]);
            flag = true;
            break;
        }
    }
    if(!flag)
        printf("No repeated element.\n");
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

    repeated(arr, size);

    return 0;
}
