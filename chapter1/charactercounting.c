#include <stdio.h>

// count characters in input, v1
int main()
{
  double nc;

  for (nc = 0; getchar() != EOF; nc++)
    ;

  printf("%.0f\n", nc);

  return 0;
}
