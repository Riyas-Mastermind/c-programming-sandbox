/*
Alphabet & Numbers Triangle
Print the given pattern

    1
    A B
    1 2 3
    A B C D
    1 2 3 4 5
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
        int num = 1;
        for(int j = 1; j <= i; j++)
        {
            if(i % 2)
                printf("%d ", num++);
            else
                printf("%c ", chr++);
        }
        printf("\n");
    }
    return 0;
}