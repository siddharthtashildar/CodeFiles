
#include <stdio.h>


void swap(int *a , int *b);

int main(){

	int n;
	printf("\nEnter Your Array Lenght: ");
	scanf("%d",&n);
	
	int array[n];
	
	printf("Enter the Elements: ");
	for(int i = 0;i<n;i++){
		scanf("%d",&array[i]);
	}
	
	for(int i = 0; i < n/2 ; i++){
		int *a = &array[i];
		int *b = &array[n-1-i];
		swap(a,b);
		
	}
	
	printf("\nYour Reversed array --> ");
	for(int i = 0;i<n;i++){
		printf(" %d",array[i]);
	}
	printf("\n");

}

void swap(int *a, int *b){

	int temp = *a;
	*a = *b;
	*b = temp;
}
