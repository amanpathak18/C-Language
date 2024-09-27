#include <stdio.h>
int main() {
  double kmh, mph;
  printf("Enter speed in kilometers per hour: ");
  scanf("%lf", &kmh);
  mph = kmh * 0.621371;
  printf("%.2lf kilometers per hour is equal to %.2lf miles per hour.\n", kmh, mph);
  return 0;
}