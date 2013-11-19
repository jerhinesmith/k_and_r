#include <stdio.h>

#define MAX_CHARACTERS 96

// COUNT SOME CHARACTERZ!
int main()
{
  int character_counts[MAX_CHARACTERS];
  for(int i = 0; i < MAX_CHARACTERS; i++) character_counts[i] = 0;

  int c;

  while((c = getchar()) != EOF) {
    character_counts[c - 32]++;
  }

  for(int i = 0; i < MAX_CHARACTERS; i++) {
    printf("%4c", i + 32);
    for(int j = 0; j < character_counts[i]; j++)
      putchar('#');
    putchar('\n');
  }

  return 0;
}
