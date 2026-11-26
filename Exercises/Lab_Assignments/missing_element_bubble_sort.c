/*
Description
    Name: M Mohammed Riyaz
    Date: 26/11/2025

    Given an integer N and two integer arrays—the first containing N elements and the second containing N - 1 elements 
    comprising all elements of the first array except one—write a C program to sort both arrays in ascending order 
    using Bubble Sort and find the missing element.  
    
    constraints:
        N >= 2 (so that the second array has at least one element).
        Elements are standard signed integers (int), and the second array is derived from the first with a single element omitted.   
        Sorting of both arrays must be performed using Bubble Sort.  

    INPUT: 
        Size1: N
        Array1: 10 40 20 50 30
        Size2: N-1
        Array2: 30 10 50 40

    OUTPUT: 
        Missing element: 20
*/
#include<stdio.h>
#include<stdbool.h>

bool read_array(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(scanf("%d", &arr[i]) != 1)
        {
            printf("You have entered invalid elements value.\n");
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

void missing(int arr1[], int arr2[], int size, int nsize)
{
    int i, j;
    for(i = 0; i < size; i++)
    {
        bool flag = false;
        for(j = 0; j < nsize; j++)
        {
            if(arr1[i] == arr2[j])
            {
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            printf("Missing element: %d \n", arr1[i]);
            break;
        }
    }
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

    int arr1[size];

    printf("Enter the Array of Elements: ");
    if(!read_array(arr1, size))
    {
        return -1;
    }

    int nsize = size-1;
    int arr2[nsize];

    printf("Enter the Array of Elements: ");
    if(!read_array(arr2, nsize))
    {
        return -1;
    }

    printf("After Bubble Sort Array1: ");
    sort_arr(arr1, size);

    printf("After Bubble Sort Array2: ");
    sort_arr(arr2, nsize);

    missing(arr1, arr2, size, nsize);

    return 0;
}
