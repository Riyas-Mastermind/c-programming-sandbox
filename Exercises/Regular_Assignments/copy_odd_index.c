#include<stdio.h>

//0 1 2 3 4 -> index
//1 2 3 4 5 -> elements

void copy_odd(int arr[], int arr_size)
{
    int count = 0;
    for(int i = 0; i < arr_size; i++)
    {
        if(i % 2 != 0)
            count++;
    }

    printf("The elements stored in the first array are : ");
    for(int i = 0; i < arr_size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int arr_odd[count];
    int odd_index = 0;
    
    printf("The elements stored in the second array are : ");
    for(int i = 0; i < arr_size; i++)
    {
        if(i % 2 != 0)
        {
            arr_odd[odd_index] = arr[i];
            printf("%d ",arr_odd[odd_index]);
            odd_index++;
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
    copy_odd(arr, size);

    return 0;
}