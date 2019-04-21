#include <stdio.h>
#include <stdbool.h>

bool checkPalindrome(char *input);
int getLength(char *input);

int main()
{
  char *input = "asdsa asdsa";

  printf("%s string is palindrome: %s\n", input, checkPalindrome(input) ? "true" : "false");

  return 0;
}

bool checkPalindrome(char *input)
{
  int size = getLength(input);
  int i;
  for (i = 0; i < size / 2; ++i)
  {
    if (input[i] != input[size - i - 1])
    {
      return false;
    }
  }
  return true;
}

int getLength(char *input)
{
  int size = 0;
  char *j;
  for (j = input; *j != '\0'; ++j)
  {
    ++size;
  }
  return size;
}