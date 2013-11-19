#include <stdio.h>

float convertToCelsius(int farenheit);

int main()
{
  float fahr = 0;
  float celsius = 0;
  while(fahr <= 300) {
    celsius = convertToCelsius(fahr);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr += 20;
  }
  return 0;
}

float convertToCelsius(int farenheit)
{
  return (5.0 / 9.0) * (farenheit - 32.0);
}
