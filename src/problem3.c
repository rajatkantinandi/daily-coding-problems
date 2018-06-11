/* This problem was asked by Stripe.
Given an array of integers, find the first missing positive integer in linear time and constant space.
In other words, find the lowest positive integer that does not exist in the array.
The array can contain duplicates and negative numbers as well.For example, the input[3, 4, -1, 1] should give 2. The input[1, 2, 0] should give 3.
You can modify the input array in - place. */
#include <stdio.h>
int main(int argc, char const *argv[])
{
  int n = 0;
  printf("Enter the number of elements:");
  scanf("%d", &n);
  if (n > 0)
  {
    int arr[n];
    printf("Enter the elements of the array:");
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
    }
    int current = 1;

    for (int i = 1; i < n; i++)
    {
    }
  }
  return 0;
}
