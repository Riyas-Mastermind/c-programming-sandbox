/*
Description
    Name: M Mohammed Riyaz
    Date: 24/11/2025

    Write a C program to read two integer arrays of sizes N1 and N2, sort both arrays in ascending order using Bubble Sort, 
    and check whether every element of the first array is present in the second array while accounting for element frequency. 
    Print "All elements are present" if every occurrence in the first array has a matching occurrence in the second array; 
    otherwise, print "Not all elements are present".
    
    constraints:
        (1 <= N1, N2 <= 100, elements between -10^5 and 10^5, sort both using Bubble Sort first, 
        duplicate elements in the first array need matching frequency in the second array)
        
    INPUT: 
        N1: 4
        array1: 4 2 7 5
        N2: 6
        array2: 8 5 2 9 7 4

    OUTPUT: 
        After Bubble Sort
        array1: 2 4 5 7
        array2: 2 4 5 7 8 9

        All elements are present
*/

#include<stdio.h>
#include<stdbool.h>

int read_size(int arr_size)
{
    if(scanf("%d", &arr_size) != 1 || arr_size <= 0)
    {
        printf("You have entered invalid size value.\n");
        return arr_size;
    } 
}

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

void sort_arr(int arr[], int arr_size)
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
            }
        }
    }
    print(arr, arr_size);
}

int main()
{
    printf("Enter the N1 size of array1: ");
    int size1 = read_size(size1);

    printf("Enter the N2 size of array2: ");
    int size2 = read_size(size2);

    int arr1[size1];
    printf("Enter the Array1 of Elements: ");
    read_array(arr1, size1);

    int arr2[size2];
    printf("Enter the Array2 of Elements: ");
    read_array(arr2, size2);

    printf("After Bubble Sort\n");

    printf("Array 1: ");
    sort_arr(arr1, size1);

    printf("Array 2: ");
    sort_arr(arr2, size2);

    bool flag = true;
    int j = 0;

    for (int i = 0; i < size1; i++)
    {
        bool found = false;

        for (; j < size2; j++)
        {
            if (arr2[j] == arr1[i])
            {
                j++;
                found = true;
                break;
            }
            if (arr2[j] > arr1[i])
            {
                break;
            }
        }

        if (!found)
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        printf("All elements are present.\n");
    }
    else
    {
        printf("Not all elements are present.\n");
    }

    return 0;
}

