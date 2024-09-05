#include <stdio.h>

int main(){

    int n;
    int missing;
	int repeat;
	
	printf("\nhow many numbers do you want to enter: ");
	scanf("%d",&n);
	int array[n];
	
	for(int j = 0; j < n ; j++){
		printf("\nEnter the Number:  ");
		scanf("%d",&array[j]);
	}
    
	for(int i = 0; i < n ; i++){
		if (array[i] == array[i+1]){
			missing = array[i] + 1;
			repeat = array[i +1];

		}
	}
    printf("\nThe missing number is : %d\n",missing);
	printf("\nThe Repeated number is : %d\n",repeat);

    return 0;
}



