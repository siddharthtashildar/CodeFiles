#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

	int i = 0;
	int count = 2;
	
	char str1[] = "amazon";
	char str2[] = "azonam";
	char stringCW[100];
	char stringACW[100];

	
	int len = strlen(str1);
	int isTrue = 0;
	
	str2[len] = '\0';
	
	while(str1[count] != '\0'){
	
		if(count > 1){
			stringCW[i] = str1[count];
			i++;
		}
		count++;
		
	}
	stringCW[i++] = str1[0];
	stringCW[i++] = str1[1];
	stringCW[i] = '\0';
	
	count = 0;
	i = 0;
	stringACW[i++] = str1[len - 2];
	stringACW[i++] = str1[len - 1];

	
	while(str1[count] != '\0'){
	
		if(count <= len-3){
			stringACW[i] = str1[count];
			i++;
		}
		count++;
	}
	stringACW[i] = '\0';
	
	printf("\nOrignal str1: %s",str1);
	printf("\nOrignal str2 : %s",str2);
	printf("\nCW : %s",stringCW);
	printf("\nACW : %s",stringACW);
	
	if(strcmp(str2,stringCW) == 0){
		printf("\nYes! it is possible!\n");
	}
	else if(strcmp(str2,stringACW) == 0){
		printf("\nYes! it is possible!\n");
	}
	else{
		printf("\nNo! Not Possible\n");
	}
	


	return 0;
}
