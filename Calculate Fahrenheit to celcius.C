#include <stdio.h>
int main() {
  double fahrenheit, celsius;
  printf("Enter temperature in Fahrenheit: ");
  scanf("%lf", &fahrenheit);
  celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
  printf("%.2lf degrees Fahrenheit is equal to %.2lf degrees Celsius.\n", fahrenheit, celsius);
  return 0;
}