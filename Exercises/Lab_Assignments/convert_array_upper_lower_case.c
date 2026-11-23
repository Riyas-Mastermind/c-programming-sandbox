/*
Description:

    Name: M Mohammed Riyaz
    Date: 19/11/2026
  
    Write a program to convert Upper Case to Lower Case and Lower Case to Upper Case
    
    Test case:
    
        I/P: 
            size: 11
            Array = {A, b, C, D, e, f, g, H, i, J, K};

        O/P:
            Array = {a, B, c, d, E, F, G, h, I, j, k};
*/
#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    char arr[size];
    printf("Enter the Array Elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf(" %c", &arr[i]); // Skips leftover '\n' or ' ', then reads the actual char
    }

    for(int i = 0; i < size; i++)
    {
        switch (arr[i])
        {
        case 'A'...'Z':
            arr[i] = arr[i]+32;
            break;
        
        case 'a'...'z':
            arr[i] = arr[i]-32;
            break;
        
        default:
            printf("Invalid value\n");
            break;
        }
        printf("%c ",arr[i]);
    }
    printf("\n");
    return 0;
}