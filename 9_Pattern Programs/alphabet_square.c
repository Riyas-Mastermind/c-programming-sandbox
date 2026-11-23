/*
Alphabet Square
Printf the given pattern

    A B C D
    A B C D
    A B C D
    A B C D
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
        char chr = 'A';
        for(int j = 1; j <= lines; j++)
        {
            printf("%c ", chr++);
        }
        printf("\n");
    }
    return 0;
}