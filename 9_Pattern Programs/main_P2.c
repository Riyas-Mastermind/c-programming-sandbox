/*
Number Square
Print the given pattern

    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4

*/

#include<stdio.h>

int main()
{
    int lines, rows;

    printf("Enter the No. of lines: ");
    scanf("%d", &lines);

    printf("Enter the No. of rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= lines; i++)
    {
        int num = 0;
        for(int j = 1; j <= rows; j++)
        {
            printf("%d ", ++num);
        }
        printf("\n");
    }
    return 0;
}