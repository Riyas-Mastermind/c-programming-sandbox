#include<stdio.h>

void days(int month)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("No. of days in the given month is 31.\n");
        break;
    
    case 4:
    case 6:
    case 9:
    case 11:
        printf("No. of days in the given month is 30.\n");
        break;

    case 2:
        printf("No. of days in the given month is 28/29.\n");
        break;

    default:
        printf("Invalid input.\n");
        break;
    }
}

int main()
{
    int month;
    printf("Enter a month number from (1 to 12): ");
    if(scanf("%d", &month) != 1 || month <= 0 || month > 12)
    {
        printf("Error: Invalid Input.\n");
        return 1;
    }

    days(month);

    return 0;
}