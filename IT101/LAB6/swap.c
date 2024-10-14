
#include <stdio.h>


void swap(int *a , int *b);

int main(){

	int x,y;
	printf("\nEnter Your Numbers: ");
	scanf("%d %d",&x,&y);
	swap(&x,&y);
	printf("\nSwapped--> %d %d \n",x,y);


}

void swap(int *a, int *b){

	int temp = *a;
	*a = *b;
	*b = temp;
}
