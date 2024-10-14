
#include <stdio.h>

int sum(int a);

int main(){

	int n, totalSum;
	printf("\nEnter Your Number: ");
	scanf("%d",&n);
	
	totalSum = sum(n);
	printf("\nThe sum of digits in %d using recursion is --> %d\n",n,totalSum);
	
}

int sum(int a){

	if(a == 0){return 0;}
	else{
		return ((a%10) + sum(a/10));
	}
}
