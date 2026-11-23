/*
Name: M Mohammed Riyaz
Date: 21/11/2026 @4:00 PM

Problem Statement: Largest and Smallest Element in an Array

    Given an integer array arr of size N, find and print the largest (maximum) and smallest
    (minimum) elements present in the array.

    Constraints:
        1 <= N <= 10^5
        -10^9 <= arr[i] <= 10^9

    Example 1:
        Input: 
            Size: 5
            Array elements: 25 4 -12 88 19

        Output:
            Largest: 88
            Smallest: -12
*/
#include<stdio.h>

void larg_smal(int arr[], int arr_size)
{
    int larg = arr[0], smal = arr[0];
    for(int i = 1; i < arr_size; i++)
    {
        if(larg < arr[i])
            larg = arr[i];
        
        if(smal > arr[i])
            smal = arr[i];
    }
    printf("Largest: %d\n", larg);
    printf("Smallest: %d\n", smal);
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

    larg_smal(arr, size);

    return 0;

}