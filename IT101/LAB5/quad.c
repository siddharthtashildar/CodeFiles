#include <stdio.h>
#include <math.h>

void quad(double ,double ,double , double * , double *);

int main(){
	double a,b,c;
	double r1,r2;
	//double *pr1 = &r1;
	//double *pr2 = &r2;
	
	printf("\nEnter a: ");
	scanf("%lf",&a);
	printf("\nEnter b: ");
	scanf("%lf",&b);
	printf("\nEnter c: ");
	scanf("%lf",&c);
	
	quad(a,b,c,&r1,&r2);
	
	printf("\nthe roots of quadratic equations are: %lf %lf \n",r1,r2);
	

	return 0;
}

void quad(double a,double b,double c , double *r1 , double *r2){
	double d;
	double x = (b*b)-(4*a*c); 
	d = sqrt(x);
	*r1 = ((-b) + d) / (2*a);
	*r2 = ((-b) - d) / (2*a);
}
