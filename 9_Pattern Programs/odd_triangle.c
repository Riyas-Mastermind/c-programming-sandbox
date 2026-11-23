/*
Odd Number Triangle
Print the given pattern

    1
    1 3 
    1 3 5
    1 3 5 7

*/
#include<stdio.h>

int main()
{
    int lines;
    printf("Enter the No. of lines: ");
    scanf("%d", &lines);

    for(int i = 1; i <= lines; i++)
    {
        int num = 1;
        for(int j = 1; j <= i; j++)
        {
           printf("%d ", num);
           num += 2;
        }
        printf("\n");
    }
    return 0;
}