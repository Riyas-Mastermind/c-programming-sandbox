/*
Description
    Name: M Mohammed Riyaz
    Date: 30/10/2025
    1. Write a program that takes an integer as input and returns its factorial. ?

    INPUT: 5 => 5x4x3x2x1 => 120 <= output;
*/ 


#include <stdio.h>

int main(){
    int fact = 1, i;
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    
    // Loop from 1 to N to get the factorial
    for (i = 1; i <= num; i++) {
        fact *= i;
    }
    printf("%d ", fact);
    
    return 0;
}
