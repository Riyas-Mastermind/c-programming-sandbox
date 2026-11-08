/*
Description
    Name: M Mohammed Riyaz
    Date: 8/11/2026

    1. Pointer and Address Representation of Arrays.
    
    Problem Statement: 
        Write a program to declare an integer array of size 5 initialized with {1, 2, 3, 4, 5}. 
        Print the base address of the array directly using its identifier name, and then iterate 
        through the array to print the memory address (&arr[i]) and value of each element.
*/

#include<stdio.h>

int main()
{
    int size;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size]; 
    /*
    An array is a fixed-size collection of elements of the same data type stored in contiguous 
    memory locations. Each element is accessed using an index, allowing efficient direct access.

    1. Array indexing starts from 0, so the first element is stored at index 0.
    2. Arrays can store multiple values of the same data type under a single variable name.
    3. C supports one-dimensional arrays as well as multidimensional arrays such as 2D and 3D arrays.
    */

    printf("Enter the array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");

    printf("Here is the list of address's.\n\n");
    for(int i = 0; i < size; i++)
    {
        printf("arr[%d] address -> %p \n", i, &arr[i]);
    }
    /*
    In main_1.c, int arr[size] is a local array inside main(). 
    
        1. In modern 64-bit architectures (x86_64), local variables and arrays are allocated on the call stack.
        2. The memory addresses you see printed (which usually look like 0x7fff...) are actual memory locations within the stack segment.
        3. The CPU keeps track of the top of the stack using the Stack Pointer register (rsp). 
            Therefore, the addresses of your local array elements are direct offsets relative to rsp.
    */

    return 0;
}