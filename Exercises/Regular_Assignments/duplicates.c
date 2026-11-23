#include<stdio.h>

void duplicate(int arr[], int arr_size)
{
    int count = 0;

    for (int i = 0; i < arr_size; i++)
    {
        int already_seen = 0;
        for (int k = 0; k < i; k++)
        {
            if (arr[k] == arr[i])
            {
                already_seen = 1;
                break;
            }
        }
        if (already_seen)
        {
            continue;
        }

        for (int j = i + 1; j < arr_size; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements found in the array: %d\n", count);
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
    
    duplicate(arr, size);

    return 0;
}