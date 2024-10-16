//if condition 
#include <stdio.h>
int main(){
  int age;
  printf("enter your age\n");
  scanf("%d",&age);
  if(age>=18){
    printf("you can vote");
  }
  else
    printf("you can't vote");
}