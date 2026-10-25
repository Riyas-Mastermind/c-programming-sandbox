/*
Description
    Name: M Mohammed Riyaz
    Date: 25/10/2025
    1. Write a program using Printf and Scanf to print and read basic types ?
*/ 

#include<stdio.h>

int main() 
{
    char name_letter;
    int pincode;
    float height;
    double latitude, longitude;

    printf("Enter the first letter of your name: ");
    scanf("%c", &name_letter);
    printf("Enter your Pincode: ");
    scanf("%d", &pincode);
    printf("Enter the height in feet: ");
    scanf("%f", &height);
    printf("Enter latitude & longitude of your address: ");
    scanf("%lf%lf", &latitude, &longitude);

    printf("Here is what you have entered\n");
    printf("First Letter in Name: %c\n", name_letter);
    printf("Pincode: %d\n", pincode);
    printf("Height: %f ft\n", height);
    printf("Location: %lf %lf\n", latitude, longitude);

    return 0;
}