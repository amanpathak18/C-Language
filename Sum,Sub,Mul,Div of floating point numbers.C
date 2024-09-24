#include <stdio.h>
int main() {
  double num1, num2, product1,product2, product3, product4;
  printf("Enter first number: ");
  scanf("%lf", &num1);
  printf("Enter second number: ");
  scanf("%lf", &num2);
  product1 = num1 + num2;
  product2=num1-num2;
  product3=num1*num2;
  product4=num1/num2;
  printf("%.2lf + %.2lf = %.2lf\n", num1, num2, product1);
  printf("%.2lf-%.2lf=%.2lf\n",num1,num2,product2);
  printf("%.2lf*%.2lf=%.2lf\n",num1,num2, product3);
  printf("%.2lf/%.2lf=%.2lf\n",num1,num2, product4);
  return 0;
}