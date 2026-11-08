/*
Solid Rectangle
Print the given pattern

    * * * * *
    * * * * *
    * * * * *

*/

#include<stdio.h>

int main()
{
    int lines, rows;

    printf("Enter the No. of lines: ");
    scanf("%d", &lines);

    printf("Enter the No. of Rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= lines; i++)
    {
        for(int j = 1; j <= rows; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}