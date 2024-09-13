#include <stdio.h>

int main(){

	
	int T;
	int row = 1;
	int sum = 1;
	
	printf("\n Enter your Number: ");
	scanf("%d",&T);
	
	while ((row * (row + 1)) / 2 <= T) {
        row++;
    }
	row--;
	
	for(int k = 1 ; k <= row ; k++){
		for(int l = 1 ; l <= (row-k) ; l++){
			printf(" ");
		}
		for(int q = 1 ; q <= k ; q++){
			printf(" %d",sum);
			sum = sum + 1;
		}
		printf("\n");
	}

	return 0;
	}
	
	
	

