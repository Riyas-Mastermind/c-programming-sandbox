/*
Name: M Mohammed Riyaz
Date: 21/11/2026 @7:17 PM

Problem Statement: Shift All Zeros to the Left (Preserve Relative Order)

    Given an integer array arr of size N, rearrange the elements in place so that all 0s appear
    at the left side (beginning) of the array, while all non-zero elements keep their original relative
    order on the right side.


    Constraints:
        1 <= N <= 10^5
        -10^9 <= arr[i] <= 10^9

    Example 1:
        Input: 
            Enter the size of array: 6
            Enter the array of elements: 1 0 2 0 3 4
            
        Output:
            0 0 1 2 3 4 
*/

#include<stdio.h>

void shift_zero(int arr[], int arr_size)
{
    int write = arr_size-1;
    for(int i = arr_size-1; i >= 0; i--)
    {
        if(arr[i] != 0)
        {
            arr[write] = arr[i];
            write--;
        }
    }
    for(int i = write; i >= 0; i--)
        arr[i] = 0;
}

int main()
{
    int size;

    printf("Enter the size of array: ");
    if(scanf("%d", &size) != 1)
    {
        printf("You Are Enterned Invalid Size Value.\n");
        return -1;
    }

    if(size <= 0)
    {
        printf("You Are Enterned Invalid Size Value.\n");
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
    
    shift_zero(arr, size);
    
    for(int i = 0; i < size; i++)
    {
      printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}