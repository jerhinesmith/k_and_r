#include <stdio.h>

// Replace multiple   spaces      with a single space
int main()
{
  char replacing = 0;
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (replacing == 0) {
        putchar(' ');
        replacing = 1;
      }
    } else {
      replacing = 0;
      putchar(c);
    }
  }
  return 0;
}
