/*
Description
    Name: M Mohammed Riyaz
    Date: 5/11/2025
   
   	You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
	You may assume that each input would have exactly one solution, and you may not use the same element twice.
	You can return the answer in any order.

	Example 1:
		Input: nums = [2,7,11,15], target = 9
		Output: [0,1]

	Explanation:
		The sum of nums[0] and nums[1] is 2 + 7 = 9, which equals the target. Therefore, the indices [0, 1] are returned.
*/ 

#include<stdio.h>

int main()
{
    int size;
    printf("Enter a size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter a array of elements: ");
    for(int i = 0; i < size; i++)
    {
      scanf("%d", &arr[i]);
    }

    int num, sum = 0;
    printf("Please Enter your target value: ");
    scanf("%d", &num);

    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            sum = arr[i] + arr[j];
            if(sum == num)
            {
              printf("[%d, %d]\n",i ,j);
              return 0;
            }
        }
    }

    return 0;
}