#include <stdio.h>

/**
 * Sorts the specified array using Bubble sort algorithm
**/
void bubbleSort(int *arr, int len);

int main()
{
  int numbers[] = {65, 4, -3, 5, 2, -2};
  unsigned int len = sizeof(numbers) / sizeof(numbers[0]);

  bubbleSort(&numbers, len);
  int i;
  for (i = 0; i < len; ++i)
  {
    printf("index: %d, number: %d\n", i, numbers[i]);
  }

  return 0;
}

void bubbleSort(int *arr, int len)
{
  int tmp;
  int i, j;

  for (j = 0; j < len - 1; j++)
  {
    for (i = 0; i < len - j - 1; i++)
    {
      if (arr[i + 1] > arr[i])
      { /* Swap array elements */
        tmp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;
      }
    }
  }
}
