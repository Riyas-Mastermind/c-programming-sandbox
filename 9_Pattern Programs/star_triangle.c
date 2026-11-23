/*
Star Triangle
Print the given pattern

    *
    * *
    * * *
    * * * *
    * * * * *
*/

#include<stdio.h>

int main()
{
    int lines;

    printf("Enter the No. of lines: ");
    scanf("%d", &lines);

    for(int i = 1; i <= lines; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}