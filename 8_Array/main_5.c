#include<stdio.h>

int main()
{
    int size;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the Array Elements: ");

    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for(int i = 0, j = size-1; i != j; i++, j--)
    {
        if(arr[i] != arr[j])
        {
            printf("it's not a Palindrome \n");
            return -1;
        }
    }

    printf("it's a Palindrome number \n");
    return 0;
}