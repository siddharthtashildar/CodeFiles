
#include <stdio.h>


int toBinary(int n){

	if(n <= 0){
		return 0;
	}
	else{
		return n%2 + (10 * toBinary(n/2));
	}

}

int main(){

	int num;
	printf("\nEnter your Number: ");
	scanf("%d",&num);
	
	int bin = toBinary(num);
	
	printf("\nThe Binary equivalent for %d is : %d \n",num,bin); 

	return 0;
}


