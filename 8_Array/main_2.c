/*
Description
    Name: M Mohammed Riyaz
    Date: 8/11/2026

    2. Count Even and Odd Numbers.
    
    Problem Statement: 
       Write a program that reads an array of integers from the user, counts how many even and odd numbers 
       are present, and then computes and displays the count of both odd and even numbers.

    Input: 
        Enter the size: 5
        Enter the array elements: 1 2 3 4 5

    Output:
        Odd Count -> 3
        Even Count -> 2
        
*/

#include<stdio.h>

int main()
{
    int size;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the array elements: ");
    int odd = 0, even = 0;
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2)
            odd++;
        else
            even++;
    }

    printf("Odd Count -> %d\nEven Count -> %d\n", odd, even);
    return 0;
}