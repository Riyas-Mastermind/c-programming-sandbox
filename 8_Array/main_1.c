#include<stdio.h>

int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Unique array elements: ");
    for(int i = 0; i < size; i++)
    {
        int count = 0;
        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
        
        if(count)
            continue;
            
        printf("%d ", arr[i]);
    }
    return 0;
}