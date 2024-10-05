#include <stdio.h>

int main(){
	int n;
	
	printf("\n Enter N: ");
	scanf("%d",&n);
	
	int count = 0;
	int temp = 5;
	
	if(n % 2 == 0 || n % 3 == 0){
		count += 1;
	}
	if (n % 6 == 0){
		count += 1;
	}
	while(temp < n){
		if(n%temp == 0){
			count += 1;
		}
		temp += 5;
	}
	
	if(count == 0){
		printf("\nPRIME!\n");
	}
	else{
		printf("\nNOT PRIME!\n");
	}
	return 0;
}
