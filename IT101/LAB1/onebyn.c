#include <stdio.h>

int main(){
	
	int n;
	float ans=0;
	float temp;
	printf("Enter your number: ");
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i++){

		temp = 1/(float)i;
		ans = temp + ans;
	
	}
	
	printf("\nHeres your answer---> %f\n",ans);


	return 0;	
}
