/*
Description:
    Name: M Mohammed Riyaz
    Date: 24/11/2026

    Prints all prime numbers within a fixed integer range from `start`
    to `end` (defaulting to 2 through 100 in `main()`).

    How it works:
    - `isPrime(int num)` checks if `num` is greater than 1 and has no
      integer factors `i` from 2 up to the square root of `num`
      (`i * i <= num`), returning 1 if prime and 0 otherwise.
    - `printPrimes(int start, int end)` iterates through every integer
      from `start` to `end` (inclusive) and prints those for which
      `isPrime` returns 1.
    - `main()` sets `start = 2` and `end = 100`, calls `printPrimes`,
      and exits with status 0.

    Input:
    - None at runtime (range bounds `start = 2` and `end = 100` are
      hardcoded in `main()`).

    Output:
    - A header line followed by all prime numbers between 2 and 100
      separated by spaces.
*/

#include<stdio.h>

int isPrime(int num)
{
    if(num <= 1)
        return 0; //Not prime
    for(int i = 2; i*i <= num; i++)
    {
        if(num % i == 0)
            return 0; // Not prime
    }
    return 1; //prime
}

void printprime(int start, int end)
{
    printf("Prime number between %d and %d are:\n", start, end);

    for(int i = start; i <= end; i++)
    {
        if(isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int start;
    printf("Enter the start value of prime number: ");
    scanf("%d", &start);

    int end;
    printf("Enter the end value of prime number: ");
    scanf("%d", &end);

    printprime(start, end);

    return 0;
}