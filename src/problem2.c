/* This problem was asked by Uber.
Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.
For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24].
If our input was [3, 2, 1], the expected output would be [2, 3, 6].
Follow-up: what if you can't use division? */
#include <stdio.h>
#include <stdlib.h>
int *complimentaryProducts(int *arr, int n);
int main(int argc, char const *argv[])
{
  int n = 0;
  printf("Enter the length of the array:");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements of the array:");

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("The modified array is: \n[  ");
  int *newArr = complimentaryProducts(arr, n);
  for (int i = 0; i < n; i++)
  {
    printf("%d  ", newArr[i]);
  }
  printf("]\n");
  return 0;
}
int *complimentaryProducts(int *arr, int n)
{
  int *newArr = malloc(sizeof(int) * n);

  for (int i = 0; i < n; i++)
  {
    newArr[i] = 1;

    for (int j = 0; j < n; j++)
    {
      if (j != i)
      {
        newArr[i] *= arr[j];
      }
    }
  }
  return newArr;
}