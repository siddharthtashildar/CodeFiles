#include <stdio.h>

int main(){

	int n;
	
	printf("\nEnter the Number to check factors: ");
	scanf("%d",&n);
	
	int array[n];
	int indice = 0;

	for(int i = 2 ; i <= n ; i++){

		if(n%i==0){

			array[indice] = i;
			indice = indice + 1;
		}
	}

	printf("\nhere is your Final Array --> \n");
	
	for(int j = 0; j<indice ; j++){
		printf(" %d",array[j]);
	}
	printf("\n");


	return 0;
} 
