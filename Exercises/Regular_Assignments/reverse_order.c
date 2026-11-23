#include<stdio.h>

#if 1
int reverse(int num)
{
    int temp = num, res = 0;
    
    while (temp)
    {
        int rem = temp % 10;
        res = (res*10) + rem;
        temp /= 10;
    }

    return res;
}

int main()
{
    int num;
    printf("Enter the numbers: ");

    if(scanf("%d", &num) != 1)
    {
        printf("Error: You have entered invalid number value.\n");
        return 1;
    }

    int get_reverse = reverse(num);

    printf("The reversed number is: %d\n", get_reverse);

    return 0;
}
#endif

#if 0
void reverse(int arr[], int arr_size)
{
    for(int i = 0, j = arr_size-1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    int size;

    printf("Enter the size of array: ");

    if(scanf("%d", &size) != 1 || size <= 0)
    {
        printf("You have Entered invalid size value.\n");
        return 1;
    }

    int arr[size];

    printf("Enter the array of elements: ");

    for(int i = 0; i < size; i++)
    {
        if(scanf("%d",&arr[i]) != 1)
        {
            printf("You have Entered invalid array value.\n");
            return 1;
        }
    }

    reverse(arr, size);

    printf("The reversed number is: "); 
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
#endif