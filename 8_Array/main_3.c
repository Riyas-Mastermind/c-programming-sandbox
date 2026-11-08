/*
Description
    Name: M Mohammed Riyaz
    Date: 8/11/2026

    3. Separate Even and Odd Numbers into Two Arrays
    
    Problem Statement: 
       Write a program to read an array of integers, segregate the odd and even numbers 
       into two separate arrays (arr1 for odd numbers and arr2 for even numbers), and 
       print the original array alongside both separated arrays.

    Input: 
        Enter the size: 5
        Enter the array elements: 1 2 3 4 5

    Output:
        Original a array: 1 2 3 4 5 
        Odd array: 1 3 5 
        Even array: 2 4
*/    

#include <stdio.h>

int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter array elements: ");
    
    int odd = 0, even = 0;
    
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        arr[i] % 2 ? odd++ : even++;
    }
    
    int arrodd[odd], arreven[even];
    
    int in_odd = 0, in_even = 0;
    
    for(int j = 0; j < size; j++)
    {
        if(arr[j] % 2 != 0)
        {
            arrodd[in_odd] = arr[j];
            in_odd++;
        }
        else
        {
            arreven[in_even] = arr[j];
            in_even++;
        }
    }
    
    printf("Odd array elements: ");
    for(int j = 0; j < odd; j++)
    {
        printf("%d ", arrodd[j]);
    }
    
    printf("Even array elements: ");
    for(int j = 0; j < even; j++)
    {
        printf("%d ", arreven[j]);
    }
    
    
    return 0;
}