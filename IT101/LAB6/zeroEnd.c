
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
	
	for(int i = 0; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            int *a = &array[i];
		    int *b = &array[j];
            if(*a == 0){
                swap(a,b);
            }
        }
	}
	
	printf("\nYour array with zero at end --> ");
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
