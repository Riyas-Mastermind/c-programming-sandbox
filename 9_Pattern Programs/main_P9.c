/*
Alphabet Triangle
Print the given pattern

    A
    A B
    A B C
    A B C D
*/

#include<stdio.h>

int main()
{
    int lines;
    printf("Enter the No. of lines: ");
    scanf("%d", &lines);

    for(int i = 1; i <= lines; i++)
    {
        char chr = 'A';
        for(int j = 1; j <= i; j++)
        {
            printf("%c ", chr++);
        }
        printf("\n");
    }
    return 0;
}