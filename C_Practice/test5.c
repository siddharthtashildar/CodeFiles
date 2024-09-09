#include <stdio.h>
#include <math.h>
int main(){
    //To find if the circle and tangent intersects and if they did what are the points of intersection
    double h,k,r,m,c;

    printf("\nEnter the co-ordinates of the centre of the cirle in the form of (h,k):");
    scanf("%lf, %lf ", &h, &k);
    printf("\nEnter the radius of the cirle:");
    scanf("%lf", &r);
    printf("\nEnter the slope and y-intercept of the line:");
    scanf("%lf, %lf", &m, &c);
    
    //Coefficient of quadratic
    double A=1+m*m;
    double B=2*(m*(c-k)-h);
    double C=h*h+(c-k)*(c-k)-r*r;

    double D=B*B-4*A*C; //Discriminant
    if(D<0){
        printf("\nNo intersection!!");
    } else if(D==0){
        double x=-B/(2*A);
        double y=-D/(4*A);
        printf("\nPoint of tangency is (%.3lf, %.3lf)!!\n", x,y);
    } else {
        double x1=(-B+sqrt(D))/(2*A);
        double x2=(-B-sqrt(D))/(2*A);
        double y1=m*x1+c;
        double y2=m*x2+c;

        printf("\nThe two points of intersection are: (%.3lf, %.3lf) and (%.3lf, %.3lf)!!", x1,y1,x2,y2);
    }
    return 0;
}