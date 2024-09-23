
#include <stdio.h>

int countDigits(int n){

	if(n <= 0){
		return 0;
	}
	else{
		return 1 + countDigits(n/10);
	}

}

int main(){

	int num;
	printf("\nEnter your Number: ");
	scanf("%d",&num);
	
	int digits = countDigits(num);
	
	printf("\nThe number of digits in %d are : %d\n",num,digits);

	return 0;
}


