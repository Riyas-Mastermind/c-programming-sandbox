/*
Name: M Mohammed Riyaz
Date: 21/11/2026 @3:00 PM

Problem Statement: Reverse Each Element of the Array at Their Index

    Given an integer array arr of size N,  reverse the digits of each individual element in place
    at its existing index (without changing the order of elements in the array), and print the updated
    array.

    Constraints:
        1 <= N <= 10^5
        -10^9 <= arr[i] <= 10^9

    Example 1:
        Input: 
            Size: 4
            Array elements: 123 405 7 89

        Output:
            321 504 7 98
*/

#include<stdio.h>

void reverse(int arr[], int arr_size)
{
    for(int i = 0; i < arr_size; i++)
    {
        long long temp = arr[i];
        bool flag = 0;

        if(temp < 0)
        {
            flag = 1;
            temp = -temp;
        }

        long long rev = 0;

        while(temp > 0)
        {
            int rem = temp % 10;
            rev = (rev*10) + rem; // Shift existing digits left, then add new digit
            temp /= 10; 
        }

        if(flag == 1)
            rev = -rev;
        
        arr[i] = rev;
    }

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
            printf("You Are Entered Invalid Array Value.\n");
            return -1;
        }
    }

    reverse(arr, size);

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}