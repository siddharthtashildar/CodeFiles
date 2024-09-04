#include <stdio.h>

int main(){
	
	int num;
	
	printf("\nEnter your number: ");
	scanf("%d",&num);
	
	printf("\nHeres your table for %d ---> \n",num);
	for(int i=1; i <= 10; i++){
	
	printf("%d X %d = %d\n", num , i , num*i);
	
	}

	return 0;	
}
