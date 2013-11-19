#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
  int c, nc, state;

  state = OUT;
  nc = 0;
  int wordlengths[10];

  for(int i = 0; i < 10; i++) wordlengths[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if(nc > 0) {
        if(nc > 10) nc = 10;
        wordlengths[nc - 1]++;
      }
      state = OUT;
      nc = 0;
    }
    else {
      state = IN;
      nc++;
    }
  }

  for(int i = 0; i < 10; i++) {
    printf("%d\t", i + 1);
    for(int j = 0; j <= wordlengths[i]; j++)
      putchar('#');
    putchar('\n');
  }
  return 0;
}
