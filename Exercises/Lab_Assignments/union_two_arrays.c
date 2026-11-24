/*
Description
    Name: M Mohammed Riyaz
    Date: 24/11/2025

    Write a C program to read two integer arrays of sizes N1 and N2, sort both arrays in ascending order using a 
    Bubble Sort function, merge them into a single array, sort the merged array in ascending order using Bubble 
    Sort, and print the union of the two arrays containing every distinct element only once in ascending order.
    
    constraints:
        (1 <= N1, N2 <= 100, elements between -10^5 and 10^5, use a function for Bubble Sort, 
        duplicates appear only once in the union, output in ascending order)
        
    INPUT: 
        Size1: 4
        Array1: 1 4 5 2
        Size2: 4
        Array2: 2 5 7 8

    OUTPUT: 
        Array 1 after sort: 1 2 4 5
        Array 2 after sort: 2 5 7 8
        Both array after merging: 1 2 4 5 2 5 7 8
        Sorted of the merged array: 1 2 2 4 5 5 7 8

        Union: 1 2 4 5 7 8
*/

#include<stdio.h>
#include<stdbool.h>

int arr_size(int size)
{
    if(scanf("%d", &size) != 1 || size <= 0)
    {
        printf("You have entered invalid size value.\n");
        return 1;
    }
    return size;
}

void read_array(int arr[], int arr_size)
{
    for(int i = 0; i < arr_size; i++)
    {
        scanf("%d", &arr[i]);
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

int copy_array(int arr[], int merging[], int msize, int size, int i)
{
    int temp1 = size;
    int j = 0;
    for(; i < msize; i++)
    {
        if(temp1)
        {
            merging[i] = arr[j];
            temp1--;
            j++;
        }
        else
            break;
    }
    return i;
}

void array_union(int arr[], int arr_size)
{
    for(int i = 0; i < arr_size-1; i++)
    {
        if(arr[i] != arr[i+1])
        {
            printf("%d ", arr[i]);
        }
    }
    printf("%d\n", arr[arr_size - 1]);
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

int main()
{
    int size1;
    printf("Enter the size1 of arrays: ");
    size1 = arr_size(size1);

    int arr1[size1];
    printf("Enter the Array1 of Elements: ");
    read_array(arr1, size1);

    int size2;
    printf("Enter the size2 of arrays: ");
    size2 = arr_size(size2);

    int arr2[size2];
    printf("Enter the Array2 of Elements: ");
    read_array(arr2, size2);

    printf("Sorted Array 1: ");
    sort_arr(arr1, size1);

    printf("Sorted Array 2: ");
    sort_arr(arr2, size2);

    int msize = size1 + size2;
    int merging[msize];

    printf("Both array after merging: ");

    int i = 0;

    i = copy_array(arr1, merging, msize, size1, i);
    copy_array(arr2, merging, msize, size2, i);

    print(merging, msize);

    printf("Sorted of the merged array: ");
    sort_arr(merging, msize);

    printf("Union: ");
    array_union(merging, msize);

    return 0;
}