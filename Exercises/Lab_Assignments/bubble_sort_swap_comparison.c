/*
Description
    Name: M Mohammed Riyaz
    Date: 24/11/2025

    Write a C program to read two integer arrays of the same size (N) and sort both arrays in ascending order 
    using Bubble Sort. While sorting each array, count the number of swaps performed using a separate swap 
    counter for each array. Finally, display both sorted arrays, print the swap count for each array, and 
    print which array required fewer swaps—or state that both arrays required the same number of swaps 
    if their swap counts are equal. 
    
    constraints:
        (1 <= N <= 100, elements between -10^5 and 10^5, count only actual swaps when arr[j] > arr[j + 1], max swaps N*(N-1)/2) 
        
    INPUT: 
        Size: 5 
        Array1: 5 1 4 2 8 
        Array2: 8 5 4 1 2 

    OUTPUT: 
        Sorted Array 1: 1 2 4 5 8
        Sorted Array 2: 1 2 4 5 8
        Array 1 Swap Count: 4
        Array 2 Swap Count: 7
        Array 1 took a lower time
*/

#include<stdio.h>

void read_array(int arr[], int arr_size)
{
    for(int i = 0; i < arr_size; i++)
    {
        if(scanf("%d", &arr[i]) != 1)
        {
            printf("You have entered invalid Array value.\n");
            return;
        }
    }
}

void print(int arr[], int arr_size)
{
    for(int i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sort_arr(int arr[], int arr_size, int swap_count)
{
    for(int i = 0; i < arr_size-1; i++)
    {
        for(int j = 0; j < arr_size-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap_count++;
            }
        }
    }
    print(arr, arr_size);
    return swap_count;
}

int main()
{
    int size;
    printf("Enter the size of arrays: ");
    if(scanf("%d", &size) != 1 || size <= 0)
    {
        printf("You have entered invalid size value.\n");
        return 1;
    } 

    int arr1[size];
    printf("Enter the Array1 of Elements: ");
    read_array(arr1, size);

    int arr2[size];
    printf("Enter the Array2 of Elements: ");
    read_array(arr2, size);

    int swap_count_array1 = 0;
    printf("Sorted Array 1: ");
    swap_count_array1 = sort_arr(arr1, size, swap_count_array1);

    int swap_count_array2 = 0;
    printf("Sorted Array 2: ");
    swap_count_array2 = sort_arr(arr2, size, swap_count_array2);

    if(swap_count_array1 < swap_count_array2)
    {
        printf("Array 1 took a lower time.\n");
    }
    else
    {
        printf("Array 2 took a lower time.\n");
    }

    return 0;
}

