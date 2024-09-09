#include <stdio.h>

int main(){
	
	int class;
	int failNo;
	
	printf("\n Enter class obtained by student: ");
	scanf("%d",&class);
	printf("\n Enter no of failed subjects by student: ");
	scanf("%d",&failNo);
	
	switch(class){
	
	case 1:
		if(failNo > 3){
			printf("\nThe student doesnt get any grace!\n");
		}
		else{
			printf("\n He gets grace marks of 5\n");
		}
		break;
	case 2:
		if(failNo > 2){
			printf("\nThe student doesnt get any grace!\n");
		}
		else{
			printf("\n He gets grace marks of 4\n");
		}
		break;
	case 3:
		if(failNo > 1){
			printf("\nThe student doesnt get any grace!\n");
		}
		else{
			printf("\n He gets grace marks of 5\n");
		}
		break;
	default:
		printf("\nInvalid!\n");
		break;
	
	
	
	
	}
	

	return 0;
}
