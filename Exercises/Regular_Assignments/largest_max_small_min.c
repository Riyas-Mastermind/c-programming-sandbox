#include<stdio.h>

void max_min(int arr[], int arr_size)
{
    int max = arr[0], min = arr[0];
    for(int i = 1; i < arr_size; i++)
    {
        if(max < arr[i])
            max = arr[i];
        if(min > arr[i])
            min = arr[i];
    }
    printf("Maximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);
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
    
    max_min(arr, size);

    return 0;
}