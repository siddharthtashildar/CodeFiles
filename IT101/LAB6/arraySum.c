
#include <stdio.h>
#include <stdbool.h>

int sum(int a);

bool isEven(int a);

int main(){

	int n;
	printf("\nEnter Your Array Lenght: ");
	scanf("%d",&n);
	
	int array[n];
	
	printf("Enter the Elements: ");
	for(int i = 0;i<n;i++){
		scanf("%d",&array[i]);
	}
	
	printf("\n");
	for(int i = 0; i < n ; i++){

		if(isEven(sum(array[i])) == true){
		
			printf("%dth element which is %d has even sum. \n",(i+1),array[i]);
			printf("\n");
		}			
	}


}

int sum(int a){

	int temp = 0;
	int x = 0;
	while(a != 0){
		temp = a % 10;
		x = x + temp;
		a = a/10;
	}
	return x;
}

bool isEven(int a){
	if(a % 2 == 0){
		return true;
	}
	else{
		return false;
	}

}

