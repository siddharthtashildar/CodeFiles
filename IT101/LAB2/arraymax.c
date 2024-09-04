#include <stdio.h>

int main(){

	int array[] = {2,6,4,9,10,99,};
	int great = array[0];
	int least = array[0];
	
	int len = sizeof(array)/sizeof(array[0]);
	
	for(int i = 1; i<= len ; i++){
		if (array[i] > great){
			great = array[i];
		}
	
	}
	for(int i =0 ; i< len ; i++){
		if (array[i] < least){
			least = array[i];
		}
	
	}
	printf("\ngreatest no --->%d\n",great);
	printf("\nsmallest no --->%d\n",least);

	return 0;
}
