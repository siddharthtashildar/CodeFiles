#include <stdio.h>

int main(){

	int n;
	
	printf("\n how many numbers do you want to enter: ");
	scanf("%d",&n);
	
	int array[n];
	
	for(int i; i < n ; i++){
	
		printf("\nEnter the %dth Number:  ",i+1);
		scanf("%d",&array[i]);
	}

	printf("\nhere is your Final Array --> \n");
	
	for(int j = 0; j<n ; j++){
		printf(" %d",array[j]);
	}
	printf("\n");

	return 0;
} 
