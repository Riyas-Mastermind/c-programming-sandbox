#include<stdio.h>

int mult(int num1, int num2)
{
    int pro = 0;
    for(int i = 1; i <= num2; i++)
    {
        pro += num1;
    }
    return pro;
}

int main()
{
    int n1, n2;
    
    printf("Enter num1 and num2: ");
    scanf("%d%d", &n1, &n2);
    
    int result = mult(n1, n2);
    
    printf("Product of two number is %d.\n", result);
    
    return 0;
}