#include <stdio.h>

int main(){
	int n;
	
	printf("\n Enter N: ");
	scanf("%d",&n);
	
	int Arr[n];
	printf("\nEnter Elements: ");
	for(int i = 0; i<n;i++){
		scanf("%d",&Arr[i]);
	}
	
	int *pArr = Arr;
	
	for(int i = 0; i<n;i++){
		printf("%d ",*(pArr+i));
	}
	printf("\n");
	return 0;
}
