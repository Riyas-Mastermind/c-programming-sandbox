/*
Description
    Name: M Mohammed Riyaz
    Date: 24/11/2025

    Write a C program to read two character (char) arrays of the same size N, sort both character arrays in 
    ascending order by ASCII value using Bubble Sort, and compare them element by element to check whether 
    they are anagrams. Print "Arrays are Anagrams" if both arrays contain the exact same characters with the 
    exact same frequency; otherwise, print "Arrays are not Anagrams".
    
    constraints:
        (1 <= N <= 100, printable ASCII char elements, sort both with Bubble Sort first, case-sensitive ASCII comparison) 
        
    INPUT: 
        Size: 5 
        Array1: b e a c b
        Array2: c b e b a

    OUTPUT: 
        Sorted Array 1: a b b c e
        Sorted Array 2: a b b c e
        Arrays are Anagrams
*/

#include<stdio.h>
#include<stdbool.h>

void read_array(char arr[], int arr_size)
{
    for(int i = 0; i < arr_size; i++)
    {
        scanf(" %c", &arr[i]);
    }
}

void print(char arr[], int arr_size)
{
    for(int i = 0; i < arr_size; i++)
    {
        printf(" %c", arr[i]);
    }
    printf("\n");
}

void sort_arr(char arr[], int arr_size)
{
    for(int i = 0; i < arr_size-1; i++)
    {
        bool flag = true;
        for(int j = 0; j < arr_size-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true)    
            break;
    }
    print(arr, arr_size);
}

int main()
{
    int size;
    printf("Enter the size of arrays: ");
    if(scanf("%d", &size) != 1 || size <= 0)
    {
        printf("You have entered invalid size value.\n");
        return 1;
    } 

    char arr1[size];
    printf("Enter the Array1 of Elements: ");
    read_array(arr1, size);

    char arr2[size];
    printf("Enter the Array2 of Elements: ");
    read_array(arr2, size);

    printf("Sorted Array 1: ");
    sort_arr(arr1, size);

    printf("Sorted Array 2: ");
    sort_arr(arr2, size);

    bool is_anagrams = true;
    for(int i = 0; i < size; i++)
    {
        if(arr1[i] != arr2[i])
        {
            is_anagrams = false;
            break;
        }
    }

    if(is_anagrams)
        printf("Arrays are Anagrams.\n");
    else
        printf("Arrays are not Anagrams.\n");

    return 0;
}