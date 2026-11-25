/*
Name: M Mohammed Riyaz
Date: 25/11/2026 @9:05 AM

Problem Statement: Iterative Binary Search in an Array

    Given a sorted one-dimensional array of integers and a target search value, determine whether the target exists in the array 
    using an iterative binary search algorithm with O(log n) worst-case time complexity and O(1) auxiliary space complexity. 
    If found, report its index; otherwise, report that the element is absent.

    Constraints:
        1 <= N <= 10^5
        -10^9 <= arr[i] <= 10^9

    Example 1:
        Input: 
            Size: 5
            Array: 12 24 36 48 60
            Target: 48

    Expected Output: 
            Element 48 is present in the array at index 3 (0-based indexing).
*/

#include<stdio.h>
#include<stdbool.h>

void print(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort_order(int arr[], int arr_size)
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

void find_target(int arr[], int arr_size, int target)
{
    int low = 0;
    int high = arr_size-1;

    bool flag = false;
    while(low <= high)
    {
        int mid = low + (high - low)/2;

        if(arr[mid] == target)
        {
            printf("Element %d is present in the array at index %d (0-based indexing).\n", arr[mid], mid);
            flag = true;
            break;
        }
        else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    if(flag == false)
        printf("Element %d does not appear anywhere in the array.\n", target);
}

int main()
{
    int size;

    printf("Enter the size of array: ");
    if(scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Error: Invalid Size Value.\n");
        return -1;
    }

    int arr[size];

    printf("Enter the array of elements: ");
    
    for(int i = 0; i < size; i++)
    {
        if(scanf("%d", &arr[i]) != 1)
        {
            printf("Error: Invalid Array Element Value.\n");
            return -1;
        }
    }
    
    printf("Sort Array: ");
    sort_order(arr, size);

    int target;
    printf("Enter the target value: ");
    if(scanf("%d", &target) != 1)
    {
        printf("Error: Invalid Target Value.\n");
        return -1;
    }

    find_target(arr, size, target);

    return 0;
}