/*
Description
    Name: M Mohammed Riyaz
    Date: 25/10/2025
    1. Write a program using Printf and Scanf to print and read basic types ?
*/ 

#include<stdio.h> /*Is a preprocessor directive used to include the 
Standard Input Output header file in program before it compilers.

#   ->  preprocessor
std ->  Standard
io  ->  Header file extension

This file contains the declarations, definitions, and macros for handling standard input
and output opertions. Without it, the compiler wouldn't know to process basic funcations
like printing text to the screen or reading user input.
*/

int main() 
{
    char name_letter;
    /*  A char typically occupies 1 byte(8 bits) of memory.
        Because it's stored as numbers under the hood using the ASCII standard, a char
        can hold integer values ranging from -128 to 127 (or 0 to 255 if declared as
        unsigned char)
    */
    int pincode;
    /*  int takes up 2 to 4 bytes(32 bits) of memory.
        Because of this size limit, a standard signed int can store numbers ranging
        from roughly -2,147,483,648 to 2,147,483,647. (if you need larger or strictly
        positive numbers, modifiers like unsigned int or long can be used).
    */
    float height;
    /*  A float occupies 4 bytes(32 bits) of memory.
        Because of this fixed size, it has limited precision, typically accurate to about
        6 to 7 decimal digits. if you need hogher precision (e.g.., for scientific calculations
        or financial data), C provides the double datatype, which uses 8 bytes and offers 
        roughly 15 to 17 digits of precision.
    */
    double latitude, longitude;
    /*  A double occupies 8 bytes(64 bits) of memory.
        Because of this extra memory, a double can store numbers with roughty 15 to 17
        decimal digits of precision, whereas a standard float is only accurate to about
        6 to 7 digits.
    */

    printf("Enter the first letter of your name: ");
    scanf("%c", &name_letter);
    printf("Enter your Pincode: ");
    scanf("%d", &pincode);
    printf("Enter the height in feet: ");
    scanf("%f", &height);
    printf("Enter latitude & longitude of your address: ");
    scanf("%lf%lf", &latitude, &longitude);

    //printf(): To display output on the screen.
    //scanf(): To read input from the user.

    printf("Here is what you have entered\n");
    printf("First Letter in Name: %c\n", name_letter);
    printf("Pincode: %d\n", pincode);
    printf("Height: %f ft\n", height); //32-bits float as per IEEE 754 provides roughty ~7 significant decimal digits 
    //float has 23 bits of mantissa 
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

    Look at how the output breaks down into real precision versus fake noise:

    Input:
    ...
    Enter latitude & longitude of your address: 1.2366252655225635552655 2.3325525563654132355412
    
    Output:
    ...
    Location: 1.23662526552256357704 2.33255255636541303232

            1.2366252655225635                      7704
                    |                                 |
     Real Stored Precision(16 digits)         Nosie / Garbage Digits
    
    The first ~16 digits match what the double successfully captured from your input.
    
    The trailing digits (7704) are completely fabricated by the printing function trying to
    fill 20 decimal slots. In this Original input had 552655 at the end, but the double
    completely dropped those and replaced them with 7704 because it ran out of storage bits.
    */

    return 0;
}