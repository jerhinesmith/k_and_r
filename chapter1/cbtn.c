#include <stdio.h>

// Count blanks, new-lines, and tabs
int main()
{
  int c;
  int blank_count = 0;
  int newline_count = 0;
  int tab_count = 0;

  while((c = getchar()) != EOF) {
    if(c == ' ')  blank_count++;
    if(c == '\n') newline_count++;
    if(c == '\t') tab_count++;
  }

  printf("%10s: %6d\n", "Blanks",   blank_count);
  printf("%10s: %6d\n", "Newlines", newline_count);
  printf("%10s: %6d\n", "Tabs",     tab_count);

  return 0;
}
