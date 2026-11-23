/*
Name: M Mohammed Riyaz
Date: 21/11/2026 @5:23 PM

Problem Statement: Sort an Array Using Bubble Sort

    Given an integer array arr of size N, and a sorting order choice (ascending or descending),
    sort the array in place using the Bubble Sort algorithm and print the resulting sorting array
    Constraints:
        1 <= N <= 10^4
        -10^9 <= arr[i] <= 10^9

    Example 1:
        Input: 
            Enter the size of array: 5
            Enter the array of elements: 45 24 62 86 25
            Enter the choice for sort order ('A' for ascending order or 'D' for descending order): d

        Output:
            86 62 45 25 24 
*/

#include<stdio.h>

void ascen_decen(int arr[], int arr_size, char choice)
{
    if(choice != 'A' && choice != 'a' && choice != 'D' && choice != 'd')
    {
        printf("Invalid sort choice.\n");
        return;
    }

    int ascending = (choice == 'A' || choice == 'a');

    for(int i = 0; i < arr_size - 1; i++)
    {
        bool swapped = false;

        for(int j = 0; j < arr_size - 1 - i; j++)
        {
            bool should_swap = ascending 
                ? (arr[j] > arr[j + 1])
                : (arr[j] < arr[j + 1]);

            if(should_swap)
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if(!swapped)
            break;
    }
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
    
    char chr;
    printf("Enter the choice for sort order ('A' for ascending order or 'D' for descending order): ");
    scanf(" %c", &chr);

    ascen_decen(arr, size, chr);
    
    for(int i = 0; i < size; i++)
    {
      printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}