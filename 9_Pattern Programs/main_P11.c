/*
Star Plus
Print the given pattern

         *
         *
     * * * * *
         *
         * 

    input is only odd number. 
*/

#include<stdio.h>

int main()
{
    int lines;
    printf("Enter the No. of lines: ");
    scanf("%d", &lines);

    int ml = (lines/2)+1;

    for(int i = 1; i <= lines; i++)
    {
        for(int j = 1; j <= lines; j++)
        {
            if(j+1 <= ml && i != ml)
                printf("  ");
            else if(j == ml && i != ml)
            {
                printf("* ");
                break;
            }
            else if(i == ml && j <= lines)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}