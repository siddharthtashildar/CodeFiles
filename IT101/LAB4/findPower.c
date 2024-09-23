
#include <stdio.h>

int findPower(int a , int b){
	if(b == 0){return 1;}
	else{
		return a * findPower(a,b-1);
	}

}

int main(){

	int num1 , base;
	printf("\nEnter your numbers: ");
	scanf("%d %d",&num1,&base);
	
	int power = findPower(num1,base);
	
	printf("\nthe power is : %d\n",power);
	return 0;
}


