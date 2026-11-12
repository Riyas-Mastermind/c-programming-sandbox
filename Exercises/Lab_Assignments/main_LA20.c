/*
Description:

    Name: M Mohammed Riyaz
    Date: 12/11/2026
  
    Write a program to find the midian of two unsorted arrays.
    
    Test case:
    
        Enter the 'n' value for Array A: 5
        Enter the 'n' value for Array B: 5
        
        Enter the elements one by one for Array A: 3 2 8 5 4
        Enter the elements one by one for Array B: 12 3 7 8 5
        
        Median of array1: 4
        Median of array2: 7
        Median of both arrays: 5.5
*/

#include<stdio.h>

int main()
{
    int size1, size2;
    printf("Enter the 'n' value for Array A: ");
    scanf("%d", &size1);
    
    printf("Enter the 'n' value for Array B: ");
    scanf("%d", &size2);
    
    int arr1[size1], arr2[size2];
    
    printf("Enter the elements one by one for Array A: ");
    for(int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the elements one by one for Array B: ");
    for(int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    for(int i = 0; i < size1; i++)
    {
        for(int j = 0; j < size1-1-i; j++)
        {
            if(arr1[j] > arr1[j+1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }

        }
    }
    
    float result_med1 = 0;
    
    int med = size1/2;
    
    if(size1 % 2)
    {
        result_med1 = arr1[med];
    }
    else
    {
        result_med1 = (arr1[med-1] + arr1[med])/2.0;
    }
    
    printf("Median of array1: %g\n", result_med1);
    
    for(int i = 0; i < size2; i++)
    {
        for(int j = 0; j < size2-1-i; j++)
        {
            if(arr2[j] > arr2[j+1])
            {
                int temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }
    }
    
    float result_med2 = 0;
    
    med = size2/2;
    
    if(size2 % 2)
    {
        result_med2 = arr2[med];
    }
    else
    {
        result_med2 = (arr2[med-1] + arr2[med])/2.0;
    }
    
    printf("Median of array2: %g\n", result_med2);
    
    printf("Median of both arrays: %g\n", (result_med1 + result_med2)/2.0);
    
    return 0;
    
}

