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
    printf("Location: %.20lf %.20lf\n", latitude, longitude); 
    /*
    A standard 64-bit IEEE 754 double provides roughly 15 to 17 significant decimal digits
    of precision. Any decimal digits beyoned that precision limit connot be stored exactly.

    When a printf statement or formatter is told to show 20 decimal place(e.g.., %.20lf),
    it blindly fills all 20 slots by converting the binary bits back into decimal. Because
    a double only has enough memory to store about 15 to 17 significant digits, everything 
    past that limit is just mathematical guesswork and garbage data.

    e.g.., 
    ...
    printf("Enter latitude & longitude of your address: ");
    scanf("%lf%lf", &latitude, &longitude);  
    ...
    printf("Location: %.20lf %.20lf\n", latitude, longitude);
    ...

    
    */
    return 0;
}