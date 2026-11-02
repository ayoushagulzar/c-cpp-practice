// Practice 8.3: String length
// Question: Write your own loop to find the length of a string and compare it with strlen().

#include <stdio.h>
#include <string.h>

int main()
{
  char str[] = "Ayousha";
  int i = 0, count;
  char c = str[i];
  while (c != 0)
  {
    c = str[i];
    i++;
  }
  count = i - 1;

  printf("Length calculated by loop : %d\n", count);
  printf("Length using strlen : %zu\n", strlen(str));

  return 0;
}
