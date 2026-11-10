/*
Description
    Name: M Mohammed Riyaz
    Date: 10/11/2025

    Write a C program that reads a character from the user. If the character is a digit, 
    determine whether it is even or odd. If it is an alphabet, determine whether it is 
    uppercase or lowercase. For any other character, display "Special character".

    INPUT: 7;

    OUTPUT: 7 is a digit.
            7 is odd.
*/

#include<stdio.h>

int main()
{
    char chr;
    printf("Enter character: ");
    scanf("%c", &chr);

    switch (chr)
    {
    case '0'...'9':
                    printf("%c is a digit.\n", chr);
                    if((chr - '0') % 2 != 0) // Convert char to actual integer for math
                        printf("%c is odd\n", chr);
                    else
                        printf("%c is even\n", chr);
                    break;
    case 'A'...'Z':
                    printf("%c is a Alphabet Letter.\n", chr);
                    printf("%c is Uppercase.\n", chr);
                    break;
    case 'a'...'z':
                    printf("%c is a Alphabet Letter.\n", chr);
                    printf("%c is Lowercase.\n", chr);
                    break;
    default:
            printf("Special character\n");
            break;
    }

    return 0;
}