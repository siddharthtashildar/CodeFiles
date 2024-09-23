
#include <stdio.h>

int sum(int n){
	if(n == 0){return 0;}
	else{
		return n + sum(n-1);
	}

}

int main(){

	int num;
	printf("\nEnter your Number: ");
	scanf("%d",&num);
	
	int total_sum = sum(num);
	
	printf("\nThe Total sum is: %d\n",total_sum);
	
	return 0;
}
