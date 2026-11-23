#include<stdio.h>

void max_larg(int arr[], int arr_size)
{
    int large = arr[0];

    for(int i = 1; i < arr_size; i++)
    {
        if(large < arr[i])
            large = arr[i];
    }

    printf("The largest number is: %d\n", large);
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
    
    max_larg(arr, size);

    return 0;
}