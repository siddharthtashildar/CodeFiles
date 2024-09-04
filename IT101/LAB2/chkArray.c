#include <stdio.h>

int main(){

	int array[] = {10,9,7,4,2,1,0};
	int is_asc = 0;
	int is_dsc = 0;
	
	int len = sizeof(array)/sizeof(array[0]);
	
	for(int i = 0; i< len ; i++){
		if (array[i] < array[i+1]){
			is_asc += 1;
		}
		else if (array[i] > array[i+1]){
			is_dsc += 1;
		}
	}
	
	if(is_asc == len-1){
		printf("\nThe Array is in ascending order!\n");
	}
	else if(is_dsc == len-1){
		printf("\nThe Array is in desecnding order!\n");
	}
	else{
		printf("\nArray Not sorted!\n");
		}


	return 0;
}
