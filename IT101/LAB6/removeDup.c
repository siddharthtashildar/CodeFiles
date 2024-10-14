
#include <stdio.h>


void swap(int *a , int *b);
void sort(int n , int *arr);
int removeDup(int a , int *arr);

int main(){

	int n,new_len;
	printf("\nEnter Your Array Lenght: ");
	scanf("%d",&n);
	
	int array[n];
	
	printf("Enter the Elements: ");
	for(int i = 0;i<n;i++){
		scanf("%d",&array[i]);
	}
	sort(n,array);
	
	printf("\nYour Sorted Array--> ");
	for(int i = 0;i<n;i++){
		printf(" %d",array[i]);
	}
	
	
	new_len = removeDup(n,array);
	
	
	printf("\nYour New Array with len %d--> ",new_len);
	for(int i = 0;i<new_len;i++){
		printf(" %d",array[i]);
	}
	printf("\n");
	
}

void swap(int *a, int *b){

	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int n , int *arr){
	
	for(int i = 0 ; i < n ; i++){
		for(int j = i+1;j<n;j++){
			if(*(arr+j) < *(arr+i)){
				swap(arr+j,arr+i);
			}
		}
	}
}

/*int removeDup(int a, int *arr){
	
	for(int i = 0 ; i < a ; i++){
		for(int j = i+1;j<a;j++){
			if(*(arr+i) == *(arr+j)){
				*(arr+i) = *(arr+j);
				a--;
			}
		}
	}
	return a;
}*/

int removeDup(int a, int *arr){
	int i = 0;
	for(int j = 1;j<a;j++){
		if(*(arr+i) != *(arr+j)){
			i++;
			*(arr+i) = *(arr+j);
		}
	}
	return i + 1;
}
