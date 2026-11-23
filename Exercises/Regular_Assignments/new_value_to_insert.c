#include<stdio.h>

void new_value(int arr[], int arr_size, int value, int position)
{
    for(int i = arr_size; i >= position; i--)
    {
      if(i != position)
      {
        arr[i] = arr[i-1];
      }
      else
        arr[i] = value;
    }
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

    int arr[size+1];

    printf("Enter the Array of Elements: ");

    for(int i = 0; i < size; i++)
    {
        if(scanf("%d", &arr[i]) != 1)
        {
            printf("You have entered invalid Array value.\n");
            return 1;
        }
    }
    
    int value;
    printf("Enter the Insert Value: ");
    if(scanf("%d", &value) != 1)
    {
        printf("You have entered invalid Insert value.\n");
        return 1;
    }

    int position;
    printf("Enter the Position value: ");
    if(scanf("%d", &position) != 1 || position < 0 || position > size)
    {
        printf("You have entered invalid Position value.\n");
        return 1;
    }

    new_value(arr, size, value, position);

    printf("The current list of the array: ");
    
    for(int i = 0; i < size+1; i++)
        printf("%d ",arr[i]);

    printf("\n");

    return 0;
}