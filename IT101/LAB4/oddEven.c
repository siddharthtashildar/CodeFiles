
#include <stdio.h>

void printOdd(int a,int b){
	
	if(b <= a+2){
		return ;
	}
	else{
		printf(" %d", a+2);
		printOdd(a+2,b);
	}
}

void printEven(int a,int b){

	if(b <= a+2){
		return ;
	}
	else{
		printf(" %d", a+2);
		printEven(a+2,b);
	}
}


int main(){

	int lowerLimit,upperLimit;
	
	printf("\nEnter your Numbers: ");
	scanf("%d %d",&lowerLimit,&upperLimit);
	
	printf("\n Odd Numbers -->  ");
	printOdd(lowerLimit,upperLimit);
	printf("\n");
	
	printf("\n Even Numbers -->  ");
	printOdd(lowerLimit-1,upperLimit);
	printf("\n");
	
	return 0;
}


