#include <stdio.h>

int main(){

	int n;
	int T;
	int row = 4;
	int sum = 1;
	
	printf("\n Enter your Numkber: ");
	scanf("%d",&T);
	
	/*for(int i = 1 ; i < T ; i++){
		for(int j = 0 ; j < i ; j++){
			row = row + 1;
		}
		
	}*/
	
	for(int k = 1 ; k <= row ; k++){
		for(int l = 1 ; l <= (row-1) ; l++){
			printf(" ");
		}
		for(int q = 1 ; q <= k ; q++){
			printf("%d",sum);
			sum = sum + 1;
		}
		printf("\n");
	}
	printf("\n %d \n",row);

	return 0;
	}
	
	
	

