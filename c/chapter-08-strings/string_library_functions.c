// Topic: String library functions
// Uses strlen(), strcpy(), strcat() and strcmp() from <string.h>.
// Note: strcat() needs enough space in the destination for both strings plus '\0'.

#include <stdio.h>
#include <string.h>

int main()
{
  char st[] = "Harry";
  char a1[30] = "Issac"; // extra room so strcat() has space
  char a2[] = "Newton";

  printf("%zu\n", strlen(st)); // strlen returns size_t -> %zu

  char target[30];
  strcpy(target, st);
  printf("%s %s\n", st, target);

  strcat(a1, a2); // a1 contains "IssacNewton" <no space in between>
  printf(" %s \n", a1);

  int a = strcmp("far", "ajoke");
  /*Negative value if str1 < str2
Zero if str1 == str2
Positive value if str1 > str2 (according to their ascii values)*/
  printf("%d\n", a);

  return 0;
}
