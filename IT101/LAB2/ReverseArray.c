#include <stdio.h>

int main(){

	int array[] = {3,6,4,9,10,98,54,77,22};
	
	
	int len = sizeof(array)/sizeof(array[0]);
	int reversed[len];
	
	for(int i = 0; i < len; i++){
	
		reversed[i] = array[(len-1)-i];
	}
	int len_reversed = sizeof(reversed)/sizeof(reversed[0]);

	printf("\nhere is your Input Array --> \n");
	
	for(int j = 0; j< len ; j++){
		printf(" %d",array[j]);
	}
	printf("\n");
	
	printf("\nhere is your Reversed Array --> \n");
	
	for(int j = 0; j < len_reversed; j++){
		printf(" %d",reversed[j]);
	}
	printf("\n");
	

	return 0;
}
