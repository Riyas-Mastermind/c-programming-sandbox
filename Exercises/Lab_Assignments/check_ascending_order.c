/*
Description
    Name: M Mohammed Riyaz
    Date: 24/11/2025

    Write a C program to read an integer array of size N and verify whether its elements are already arranged in ascending (non-decreasing) order. 
    Traverse the array and compare each adjacent pair of elements (arr[i] and arr[i + 1]): if every element is less than or equal to the next element 
    (arr[i] <= arr[i + 1]), print "The array is in ascending order."; otherwise, print "The array is not in ascending order."
    
    constraints:
        (1 <= N <= 100, elements between -10^5 and 10^5, duplicate/equal adjacent values allowed in ascending order, 
        single-element array is ascending)
        
    INPUT: 
        Size: 6
        Array: 10 20 20 35 40 50

    OUTPUT: 
        The array is in ascending order.
*/
#include<stdio.h>
#include<stdbool.h>

int check_ascen(int arr[], int arr_size, bool check)
{
    for(int i = 0; i < arr_size-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            printf("The array is not in ascending order.\n");
            check = false;
            break;
        }
    }
    return check;
}

int main()
{
    int size;

    printf("Enter the size of array: ");
    if(scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Error: You Are Enterned Invalid Size value.\n");
        return -1;
    }

    int arr[size];

    printf("Enter the array of elements: ");

    for(int i = 0; i < size; i++)
    {
        if(scanf("%d", &arr[i]) != 1)
        {
            printf("Error: You Are Enterned Invalid Array Element Value.\n");
            return -1;
        }
    }
    
    bool flag = true;
    flag = check_ascen(arr, size, flag);

    if(flag == true)
        printf("The array is in ascending order.\n");

    return 0;
}