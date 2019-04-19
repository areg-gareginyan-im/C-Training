#include <stdio.h>

void bubbleSort(int arr[], int len);

int main()
{
  int numbers[] = {-2, 4, -3, 2, 1, -2};

  int len = (int) sizeof(numbers) / sizeof(numbers[0]);

  bubbleSort(numbers, len);

  for (int i = 0; i < len; i++)
  {
    printf("index: %d, number: %d\n", i, numbers[i]);
  }

  return 0;
}

void bubbleSort(int arr[], int len)
{
  int tmp;
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
