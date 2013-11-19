#include <stdio.h>

#define LOWER 0     // Lower limit of table
#define UPPER 300   // Upper limit
#define STEP  20    // Mother fucking step size

// print Fahrenheit-Celsius table
int main()
{
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

  return 0;
}
