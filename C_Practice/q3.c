#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int T;
	int N;
    int tallest;

	printf("\nT: ");
	scanf("%d",&T); 
	
	for(int i = 1 ; i <= T; i++) {

		printf("\nN: ");
	    scanf("%d",&N);

	    int array[N];
	    
	    for(int j = 0; j < N; j++){
	        scanf("%d",&array[j]);                                                            
	    }
	    
	    tallest = array[0];
	    
	    for(int k = 0; k < N ; k++){
		    if (array[k] > tallest){
			tallest = array[k];
		    }
	    }
		printf("\nTallest: %d\n",tallest);

		//T = T - 1;

	}

}

