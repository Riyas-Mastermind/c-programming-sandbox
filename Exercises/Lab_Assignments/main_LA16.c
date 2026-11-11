/*
Description
    Name: M Mohammed Riyaz
    Date: 11/11/2025

    Multiply all the non-zero digits of the given number, ignoring every digit that is 0.
    
    INPUT:  204305

    OUTPUT: Digits considered: 2 x 4 x 3 x 5 = 120. 
*/

#if 1
#include<stdio.h>

int main()
{
    int num;
    printf("Enter the numbers: ");
    scanf("%d", &num);

    if(num == 0)
    {
        printf("Invalid Input.\n");
        return 0;
    }

    int pro = 1;

    while(num)
    {
        int rem = num % 10;
    
        if(rem == 0)
            num /= 10;
        else
            pro *= rem;

        if(rem != 0)
            num /= 10;
    }

    printf("%d\n", pro);

    return 0;
}
#endif



#if 0
#include<stdio.h>

int main()
{
    int size;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size], pro = 1;

    printf("Enter the array Elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] == 0)
            arr[i] /= 10;
        else
            pro *= arr[i];
    }
    printf("%d\n",pro);

    return 0;
}
#endif