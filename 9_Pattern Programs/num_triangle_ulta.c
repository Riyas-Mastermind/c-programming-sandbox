/*
Number Triangle Ulta
Print the given pattern

    1 2 3 4
    1 2 3
    1 2
    1

*/

#include<stdio.h>

int main()
{
    int lines;
    printf("Enter the No. of lines: ");
    scanf("%d", &lines);

    for(int i = 1; i <= lines; i++)
    {
        int num = 0;
        for(int j = lines; j >= i; j--)
        {
            printf("%d ", ++num);
        }
        printf("\n");
    }
    return 0;
}