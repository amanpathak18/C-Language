#include<stdio.h>
int main(){
  int a,b,sum,diff,mul,div;
  printf("Enter the value of a and b:");
  scanf("%d%d",&a,&b);
  sum=a+b;
  diff=a-b;
  mul=a*b;
  div=a/b;
  printf("the sum of a and b is %d\n",sum);
  printf("the diff of a and b is %d\n",diff);
  printf("the mul of a and b is %d\n",mul);
  printf("the div of a and b is %d\n",div);
  return 0;
}