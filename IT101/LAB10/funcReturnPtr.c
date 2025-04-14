
#include <stdio.h>

static int s;

int* add(int a,int b){
	s= a+b;
	return &s;
}


int main(){
	
	int a = 10;
	int b = 5;
	int* sum;
	
	sum = add(a,b);
	

	printf("\nAdd : %d\n",*sum);




	return 0;
}
