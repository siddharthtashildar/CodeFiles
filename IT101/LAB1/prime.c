#include <stdio.h>

int main(){
	
	int num;
	int temp = 0;
	
	printf("\nEnter your number: ");
	scanf("%d",&num);
	
	for(int i = 2; i < num;i++){
	
		if(num % i == 0){
		temp += 1;
		}
	}
	if(temp == 0){
	printf("\n%d is a prime number!\n",num);
	}
	else{
	printf("\n%d is not a prime number!\n",num);
	}

	return 0;	
}
