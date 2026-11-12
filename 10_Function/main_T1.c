#include<stdio.h>

int addition(int num1, int num2)
{
    int sum = num1+num2;
    return sum;
}

int main()
{
    int n1, n2;
    printf("Enter num1 and num2: ");
    scanf("%d%d", &n1, &n2);
    
    int result = addition(n1, n2);

    printf("Sum = %d\n", result);
    
    return 0;
}