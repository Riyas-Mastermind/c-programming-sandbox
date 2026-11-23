/*
Description:

    Name: M Mohammed Riyaz
    Date: 19/11/2026
  
    Write a program to print the pair of numbers in the array, whose sum is equal to the number entered by user
    
    Test case:
    
        I/P: 
            Array = {1, 2, 4, 6, 7, 8, 10, 3, 13, 14};
            Num = 11;

        O/P:
            7,4
            10,1
            8,3
*/

#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the Array Elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int num, count = 0;
    printf("Enter the num value: ");
    scanf("%d", &num);

    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[i]+arr[j] == num)
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
                count++;
            }
        }
    }
    printf("No. of pair is %d\n", count);
    return 0;
}