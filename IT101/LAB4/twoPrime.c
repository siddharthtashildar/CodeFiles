
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n){

	int temp = 0;
	for(int i = 2;i<n;i++){
		if(n % i == 0){
			temp = temp + 1;
		}
	}
	if(temp == 0){
		return true;
	}
	else{
		return false;
	}
}

bool isPossible(int n){
	bool chk = false;
	for(int i = 2; i < n; i++){
		bool term1 = isPrime(i);
		
		for(int j = 2;j<n;j++){	
			bool term2 = isPrime(j);
			int sum = i+j;
			if(term1 && term2 && sum == n){
				chk =  true;
				break;
			}
		}
	}
	if(chk){
		return true;
	}
	else{
		return false;
	}
}

int main(){

	int num;
	printf("\nEnter your Number: ");
	scanf("%d",&num);
	
	bool check = isPossible(num);
	

	if(check){
		printf("\nYes it is possible!\n");
		}
	else{
		printf("\nNO it is NOT possible!\n");
		}

	return 0;
}
