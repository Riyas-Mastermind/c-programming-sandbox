/*
Star Cross
Print the given pattern

    *   *
     * *
      *
     * *
    *   *
*/

#include<stdio.h>

int main()
{
    int lines;
    printf("Enter the No. of lines: ");
    scanf("%d", &lines);

    int num = 1;
    for(int i = 1; i <= lines; i++)
    {
        for(int j = 1; j <= lines; j++)
        {
            if(i == j || i+j == lines+1)
            {
                printf("* ");
            }
            else
                printf("  ");
           
        }
        printf("\n");
    }
    return 0;
}