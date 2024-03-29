#include <stdio.h>

#define IN  1 // inside a wurd
#define OUT 0 // not inside a wurd

int main()
{
  int c, state;

  state = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) putchar('\n');
      state = OUT;
    }
    else {
      state = IN;
      putchar(c);
    }
  }

  return 0;
}
