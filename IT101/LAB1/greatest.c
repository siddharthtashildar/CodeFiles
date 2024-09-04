#include <stdio.h>

int main(){
	
	int n1;
	int n2;
	int n3;
	int greatest;
	
	printf("\nenter your first number: ");
	scanf("%d",&n1);
	
	printf("\nenter your second number: ");
	scanf("%d",&n2);
	
	printf("\nenter your second number: ");
	scanf("%d",&n3);
	
	if(n1>n2 && n1>n3){
		printf("\nThe Greatest number is ---> %d\n",n1);
	}

	else if(n2>n1 && n2>n3){
		printf("\nThe Greatest number is ---> %d\n",n2);
	}
	
	else if(n3>n2 && n3>n1){
		printf("\nThe Greatest number is ---> %d\n",n3);
	}

	return 0;	
}
