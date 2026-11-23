#include <stdio.h>
#include <limits.h>

void second_largest(int arr[], int arr_size)
{
    int max = INT_MIN;
    int smax = INT_MIN;

    for(int i = 0; i < arr_size; i++)
    {
        if(max < arr[i])
        {
            smax = max; // smax is now previous max
            max = arr[i]; // max is now a new max
        }
        else if(smax < arr[i] && max != arr[i]) // max > arr[i]
        {
            smax = arr[i];
        }
    }
    printf("First Largest value is : %d\n", max);
    printf("Second Largest value is : %d\n", smax);
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
    
    second_largest(arr, size);

    return 0;
}