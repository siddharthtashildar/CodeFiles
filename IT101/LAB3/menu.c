#include <stdio.h>

int main(){
	
	
	int chk;
	int n;
	
	while(chk != 4){
	
		printf("\n Select Operations ---> \n");
		printf("\n 1.Factorial");
		printf("\n 2.Prime");
		printf("\n 3.odd even");
		printf("\n 4.Exit");
		printf("\n Enter(1/2/3/4) : ");
		scanf("%d",&chk);
		
		switch(chk){
		
		case 1:
			int fact = 1;
			printf("\n ENnter N: ");
			scanf("%d",&n);
			
			for(int i = 1; i <= n;i++){
				fact = fact * i;
			}
			
			printf("\nheres the fact: %d\n",fact);
			break;
		
		case 2:
			int temp = 0;
			printf("\n ENnter N: ");
			scanf("%d",&n);
			
			for(int i = 2 ; i < n ; i++){
				if(n % i == 0){
					temp = temp + 1;
				}
			}
			if(temp != 0){
				printf("\n %d is not a prime number! \n",n);
			}
			else{
				printf("\n %d is a prime number! \n",n);
			}
			break;
			
		case 3:
			printf("\n ENnter N: ");
			scanf("%d",&n);
			if(n % 2 == 0){
				printf("\n %d is a even number \n",n);
			}
			else{
				printf("\n %d is a odd number \n",n);
			}
			break;
		default:
			continue;
		
		
		}
	
	}
	return 0;
}
