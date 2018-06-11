/* 
Given a list of numbers, return whether any two sums to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
Bonus: Can you do this in one pass? */
#include <stdio.h>
#include <stdbool.h>
bool match(int *arr, int k, int n);
int main()
{
  int k = 0, n = 0;
  printf("Enter the number of elements of the array:");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the value of K: ");
  scanf("%d", &k);
  if (k > 0 && n > 1)
  {
    if (match(arr, k, n))
    {
      printf("The array has 2 elements summing up to K=%d\n", k);
    }
    else
    {
      printf("The array doesn't contain 2 elements summing up to K=%d\n", k);
    }
  }
  return 0;
}
bool match(int *arr, int k, int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] + arr[j] == k)
      {
        return true;
      }
    }
  }
  return false;
}