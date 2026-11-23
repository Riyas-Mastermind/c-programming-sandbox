#include<stdio.h>

//Elements: 1  2  4  5  10  6  3

void remove_even(int arr[], int arr_size)
{
    int count = 0;
    printf("Result: ");
    for(int i = 0; i < arr_size; i++)
    {
        if(arr[i] % 2 != 0)
        {
            count++;
            arr[count-1] = arr[i];
            printf("%d ", arr[count-1]);
        }
    }
    printf("\n");
}

int main()
{
    int size;
    printf("Enter the size of array: ");
    if(scanf("%d", &size) != 1 || size <= 0)
    {
        printf("You have entered invalid size value.\n");
        return 1;
    } 

    int arr[size];

    printf("Enter the Array of Elements: ");

    for(int i = 0; i < size; i++)
    {
        if(scanf("%d", &arr[i]) != 1)
        {
            printf("You have entered invalid Array value.\n");
            return 1;
        }
    }
    
    remove_even(arr, size);

    return 0;
}