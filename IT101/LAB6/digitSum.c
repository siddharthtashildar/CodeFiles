
#include <stdio.h>

int sum(int a);

int main(){

	int n, totalSum;
	printf("\nEnter Your Number: ");
	scanf("%d",&n);
	
	totalSum = sum(n);
	printf("\nThe sum of digits in %d without recursion is --> %d\n",n,totalSum);
	
}

int sum(int a){

	int temp = 0;
	int x = 0;
	while(a != 0){
		temp = a % 10;
		x = x + temp;
		a = a/10;
	}
	return x;
}
