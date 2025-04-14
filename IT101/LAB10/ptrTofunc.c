
#include <stdio.h>

int add(int a,int b){
	return a+b;
}

int sub(int a,int b){
	return a-b;
}

int main(){
	
	int a = 10;
	int b = 5;
	int (*operation)(int,int);
	
	operation = add;
	printf("\nAdd : %d\n",operation(a,b));
	operation = sub;
	printf("Sub : %d\n",operation(a,b));



	return 0;
}
