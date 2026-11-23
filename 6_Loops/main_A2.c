/*
Enter a number: 10

0 1 1 2 3 5 8
*/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int sum = 0;
    int pre_value, new_value;
    
    for(int i = 0; i <= num; i++)
    {
        if(i >= 1)
        {
            pre_value = i-1;
            new_value = i;
        }
        else
            printf("%d ", i);
        
        printf("%d ", sum);
    }
    return 0;
    
}
