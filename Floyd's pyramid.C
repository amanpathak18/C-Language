#include<stdio.h>
int main(){
	int i,j,n,k;
	printf("enter the number of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		k=1;
		for(j=1;j<=2*i-1;j++){
			printf("%d",k++);
		}
		printf("\n");
	}
}