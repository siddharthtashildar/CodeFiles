
#include <stdio.h>

typedef unsigned int dudu;
typedef float hover;

int main(){
	
	dudu age = 25;
	hover percentage = 87.5;
	
	printf("Using typedef:\n");
	printf("Age dudu : %u\n", age);
 	printf("Percent hover: %.2f\n", percentage);
 	
 	printf("Typecasting:\n");
 	int intX = 10;
 	int intY = 3;
 	float floatResult;
 	
 	printf("Without typecasting: %d / %d = %d\n", intX, intY, intX / intY);
 	
 	floatResult = (float)intX / intY;
 	
 	printf("With typecasting: %d / %d = %.2f\n", intX, intY, floatResult);


	return 0;
}
