#include <stdio.h>

void bubbleSort(double arr[], int len);

int main()
{
  double numbers[] = {-2.65, 4.0, -3, 2.65, 2.64, -2};

  int len = (int) sizeof(numbers) / sizeof(numbers[0]);

  bubbleSort(numbers, len);

  for (int i = 0; i < len; i++)
  {
    printf("index: %d, number: %f\n", i, numbers[i]);
  }

  return 0;
}

void bubbleSort(double arr[], int len)
{
  double tmp;
  for (int j = 0; j < len - 1; j++)
  {
    for (int i = 0; i < len - j - 1; i++)
    {
      if (arr[i + 1] > arr[i])
      { // Swipe array elements
        tmp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;
      }
    }
  }
}
