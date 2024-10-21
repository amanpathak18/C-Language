#include<stdio.h> 
int main() 
{ 
	int i,age; 
	for(i = 0 ;i<10; i++)
	{ 
		printf("Iteration time %d\nEnter Your Age : ",i ); 
		scanf("%d",&i); 
		// if (age>10) 
		// { 
		// break; // Checking Break Statement 
		// } 
		if(age<10) 
		{ continue; }
		printf("Hey Guys\n"); 
		printf("This code is printed coz if condition is not satisfied. \n"); 
		printf("Checking Continue Statement\n\n"); // Checking Continue Statement 
	} 
	return 0; 
} 