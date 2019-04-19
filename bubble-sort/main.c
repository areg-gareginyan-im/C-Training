#include <stdio.h>

/**
 * Sorts the specified array using Bubble sort algorithm
**/
void bubbleSort(double *arr, int len);

int main()
{
  double numbers[] = {65.156, 4.13, -3.003, 5, 2.55, -3};
  unsigned int len = sizeof(numbers) / sizeof(numbers[0]);

  bubbleSort(&numbers, len);
  int i;
  for (i = 0; i < len; ++i)
  {
    printf("index: %d, value: %lf\n", i, numbers[i]);
  }

  return 0;
}

void bubbleSort(double *arr, int len)
{
  double tmp;
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
