/*
Description
    Name: M Mohammed Riyaz
    Date: 27/10/2025
    1. Write a program to check whether a given number is Happy Number ?
    Input: 19
    Output: Happy Number
    -> For 19: 1^2+9^2 = 82, then 8^2+2^2 = 68, then 6^2+8^2 = 100, then 1^2+0^2+0^2 = 1. 
    Since the process end at 1, 19 is a Happy Number.
*/ 

#include<stdio.h>

int num;
int power = 1;

int main()
{
    printf("Enter a Number: ");
    if(scanf("%d", &num)!=1){
        printf("Error: Enter the only integer value.\n");
        return -1;
    }

    if(num <= 0)
    {
        printf("Error: Please enter only +Ve integer value.\n");
        return -2;
    }
    
    else
    {
        //For 19: 1^2+9^2 = 82, then 8^2+2^2 = 68, then 6^2+8^2 = 100, then 1^2+0^2+0^2 = 1. 
    //Since the process end at 1, 19 is a Happy Number.
        for(int i=num; i>0; i--)
        {
            rem = num%10; //19%10->9
            rev = num/10; //19/10->1
            printf("%d ", power);
            power *= 2;
        }
    }
    printf("\n");
    return 0;
}