/*
Description
    Name: M Mohammed Riyaz
    Date: 28/11/2025
   
   	Write a C program using pointers and modular functions with input validation to read two integer arrays of user-specified sizes, 
    swap their overlapping elements, reverse each array, calculate their sum, product, and average, and compute the square and 
    cube of each element in both arrays.

    Constraints
        1 <= size1, size2 <= 10^5 (typical stack/VLA limits; size1 and size2 must be positive integers).
        Array elements are signed 32-bit integers (int).
        Intermediate and final products (pro) and cubes (cub) should fit within signed int range without overflow.
        Non-integer inputs or non-positive array sizes are treated as invalid input, printing an error message and terminating with exit code 1.
       
    Input: 
        First line: A positive integer size1 (size of Array-1).
        Second line: A positive integer size2 (size of Array-2).
        Third line: size1 space-separated integers for Array-1.
        Fourth line: size2 space-separated integers for Array-2.

    Output: 
        Displays Array-1 and Array-2 before and after swapping the first min(size1,size2) elements.
        Displays Array-1 and Array-2 before and after reversing each array in place.
        Prints the Sum and Product of elements for Array-1 and then for Array-2.
        Prints the average (%g) of elements for Array-1 and then for Array-2.
        Prints the squared elements and cubed elements for Array-1 and then for Array-2.
        If any size or array element input is invalid, prints Error: Invalid Input. and exits with status 1.
*/

#include<stdio.h>
#include<stdbool.h>

bool read_size(int *size)
{
    if(scanf("%d", size) != 1 || *size <= 0)
    {
        return false;
    }
    return true;
}

bool read_array(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(scanf("%d", (arr + i)) != 1)
        {
            return false;
        }
    }
    return true;
}

void print(int *arr, int arr_size)
{
    for(int i = 0; i < arr_size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void swap_arr(int *arr1, int *arr2, int size1, int size2)
{
    int swap_size;
    if(size1 > size2)
        swap_size = size2;
    else
        swap_size = size1;

    for(int i = 0; i < swap_size; i++)
    {
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
    printf("Array-1 After Swap: ");
    print(arr1, size1);
    printf("Array-2 After Swap: ");
    print(arr2, size2);
}

void rev(int *arr, int size)
{
    for(int i = 0, j = size-1; i < j; i++, j--)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
    }
    print(arr, size);
}

void sum_pro(int *arr, int size, int *sum, int *pro)
{
    for(int i = 0; i < size; i++)
    {
        *sum += *(arr + i);
        *pro *= *(arr + i);
    }
}

void avg_fun(int *arr, int size, double *avg)
{
    *avg = 0.0;
    for(int i = 0; i < size; i++)
    {
        *avg += *(arr + i); 
    }
    *avg /= size;
}

void squ_fun(int *arr, int *squ, int size)
{
    for(int i = 0; i < size; i++)
    {
        
        *(squ + i) = *(arr + i) * (*(arr + i));
    }
    print(squ, size);
}

void cub_fun(int *arr, int *cub, int size)
{
    for(int i = 0; i < size; i++)
    {
        *(cub + i) = *(arr + i) * (*(arr + i)) * (*(arr + i));
    }
    print(cub, size);
}

int main()
{
    int size1, size2;
    printf("Enter the Size of Array-1: ");
    if(!read_size(&size1))
    {
        printf("Error: Invalid Input.\n");
        return 1;
    }

    printf("Enter the Size of Array-2: ");
    if(!read_size(&size2))
    {
        printf("Error: Invalid Input.\n");
        return 1;
    }

    int arr1[size1];

    printf("Enter the Array-1 of Elements: ");
    if(!read_array(arr1, size1))
    {
        printf("Error: Invalid Input.\n");
        return 1;
    }

    int arr2[size2];

    printf("Enter the Array-2 of Elements: ");
    if(!read_array(arr2, size2))
    {
        printf("Error: Invalid Input.\n");
        return 1;
    }

    printf("\n-----Swap the Arrays------\n");
    printf("Array-1 Before Swap: ");
    print(arr1, size1);
    printf("Array-2 Before Swap: ");
    print(arr2, size2);
    swap_arr(arr1, arr2, size1, size2);

    printf("\n-----Reverse the Array-1-----\n");
    printf("Before rev: ");
    print(arr1, size1);
    printf("After rev: ");
    rev(arr1, size1);

    printf("\n-----Reverse the Array-2-----\n");
    printf("Before rev: ");
    print(arr2, size2);
    printf("After rev: ");
    rev(arr2, size2);

    printf("\n-----Sum and Product for Array-1-----\n");
    int sum = 0, pro = 1;
    sum_pro(arr1, size1, &sum, &pro);
    printf("Sum is %d\n", sum);
    printf("Product is %d\n", pro);

    printf("\n-----Sum and Product for Array-2-----\n");
    sum = 0, pro = 1;
    sum_pro(arr2, size2, &sum, &pro);
    printf("Sum is %d\n", sum);
    printf("Product is %d\n", pro);

    printf("\n------Average of Arrays--------\n");
    double avg = 0.0;
    printf("Array-1 Average: ");
    avg_fun(arr1, size1, &avg);
    printf("%g \n", avg);
    printf("Array-2 Average: ");
    avg_fun(arr2, size2, &avg);
    printf("%g \n", avg);

    printf("\n-----Square and cube of Array-1-----\n");
    printf("Square of Array-1: ");
    int squ1[size1];
    squ_fun(arr1, squ1, size1);
    printf("Cube of Array-1: ");
    int cub1[size1];
    cub_fun(arr1, cub1, size1);

    printf("\n-----Square and cube of Array-2-----\n");
    printf("Square of Array-2: ");
    int squ2[size2];
    squ_fun(arr2, squ2, size2);
    printf("Cube of Array-2: ");
    int cub2[size2];
    cub_fun(arr2, cub2, size2);

    return 0;
}