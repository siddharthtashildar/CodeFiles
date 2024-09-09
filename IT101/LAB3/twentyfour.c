#include <stdio.h>

int main(){

	int min_24;
	int hour_24;
		
	do{
		printf("\n Enter Hours & min in 24Hr format: ");
		scanf("%d %d",&hour_24,&min_24);
		if(hour_24 < 24){
			if(hour_24 >= 12){
				printf("\nThe Current time in 12 hr format is : %d:%d pm \n",hour_24 - 12,min_24);
			}
			else if(hour_24 <= 12){
				printf("\nThe Current time in 12 hr format is : %d:%d pm \n",hour_24,min_24);
			}
		}
		else{
			printf("\nInvalid Input!\n");
			}

	}while(hour_24 > 24);
	
	return 0;
}
