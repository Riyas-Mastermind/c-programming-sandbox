#include<stdio.h>

void diff_larg_small(int arr[], int arr_size)
{
    int larg = arr[0], smal = arr[0];
    int larg_index = 0, smal_index = 0;

    for(int j = 1; j < arr_size; j++)
    {
      if(larg < arr[j])
      {
          larg = arr[j];
          larg_index = j;
      }      
      if(smal > arr[j])
      {
          smal = arr[j];
          smal_index = j;
      }
    }
    printf("%d\n", larg_index - smal_index);
}

int main()
{
    int size;

    printf("Enter the size of array: ");
    if(scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Error: You Are Enterned Invalid Size value.\n");
        return -1;
    }

    int arr[size];

    printf("Enter the array of elements: ");

    for(int i = 0; i < size; i++)
    {
        if(scanf("%d", &arr[i]) != 1)
        {
            printf("Error: You Are Enterned Invalid Array Element Value.\n");
            return -1;
        }
    }
    
    diff_larg_small(arr, size);

    return 0;
}