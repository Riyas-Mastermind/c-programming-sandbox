#include<stdio.h>

float avg(int n1, int n2, int n3)
{
    return (float)(n1+n2+n3)/3.0;
}

int main()
{
    int num1, num2, num3;
    
    printf("Enter 3 number: ");
    
    scanf("%d%d%d", &num1, &num2, &num3);
    
    float result = avg(num1, num2, num3);
    
    printf("Average is %f\n", result);
    
    return 0;
}