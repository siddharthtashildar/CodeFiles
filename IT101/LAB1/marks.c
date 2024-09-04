#include <stdio.h>

int main(){
	

	float temp;
	float total_sum=0;
	float percentage;


	for(int i =1; i <= 5;i++) {
		
	    printf("\nEnter your marks out of 100 for subject %d:",i);
	    scanf("%f",&temp);
        total_sum =total_sum + temp;
    }
	
	percentage = (total_sum/500) * 100;
	
	printf("\nThe total marks the student obtained is %.2f\n",total_sum);
	printf("\nThe total Percentage of the student is %.2f\n",percentage);


	return 0;	
}