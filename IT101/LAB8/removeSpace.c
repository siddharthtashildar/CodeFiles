#include <stdio.h>

int main(){

	int i = 0;
	int count = 0;
	
	char str[] = "Joseph Vissarionovich Stalin";
	char string[100];
	
	while(str[i] != '\0'){
	
		if(str[i] != ' '){
			string[count] = str[i];
			count++;
		}
		i++;
	}
	string[count] = '\0';
	
	printf("\nYour Original String --> %s \n",str);
	printf("\nYour New String --> %s \n",string);

	return 0;
}
