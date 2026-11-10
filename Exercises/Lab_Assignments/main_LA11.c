/*
Description
    Name: M Mohammed Riyaz
    Date: 10/11/2025

    Write a program to Grenerate Prime Number upto limit.

    A prime number is a VIP number that is strictly greater than 1 
    and can only be divided evenly by 1 and itself. 
    If any other number can divide it cleanly, its VIP status is revoked.
    
    INPUT: 17;

    OUTPUT: Prime Number;
*/

#if 0
#include<stdio.h>

int main()
{
    int num, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num <= 1)
    {
        printf("This is not a Prime Number.\n");
        return 0;
    }

    for(int i = 2; i < num; i++)
    {
        if(num % i != 0)
        {
            continue;
        }
        else
        {
            flag = 1;
            printf("This is not a Prime Number.\n");
            break;
        }
    }

    if(flag == 0)
        printf("This is a Prime Number.\n");

    return 0;
}
#endif

#if 1
#include<stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    for(int i = 2; i <= limit; i++)
    {
        int flag = 0;
        for(int j = 2; j*j <= i; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        
        if(flag == 0)
            printf("%d ", i);
    }
    return 0;
}

#endif