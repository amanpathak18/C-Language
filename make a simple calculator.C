#include<stdio.h>
int main(){
char operator;
double num1,num2;
printf("Enter an operator(+,-,*,/)");
  scanf(" %c",&operator);
  printf("Enter two numbers ");
  scanf("%lf %lf",&num1,&num2);
  switch(operator){
    case'+':
    printf(" %.1lf + %.1lf= %.1lf\n",num1,num2,num1+num2);
   break;
    case'-':
    printf("%.1lf-%.1lf=%.1lf\n",num1,num2,num1-num2);
    break;
    case'*':
    printf("%.1lf*%.1lf=%.1lf\n",num1,num2,num1*num2);
    break;
    case'/':
      if("num2=0"){
        printf("Error!division by zero is not allowed");
      }else{
printf("%.1lf/%.1lf=%.1lf\n",num1,num2,num1/num2);
      }
      break;
        defaulf:
        printf("error! invalid operator.\n");
      }
}