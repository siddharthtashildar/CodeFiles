#include <stdio.h>

int hcf(int n1, int n2)
{
    int min = (n1<n2) ? n1 : n2;
    int hcf=1;
    for(int i=1; i<=min; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
    }
    return hcf;
}


int main(){

    int t;
    scanf("%d",&t);

    for(int i = 1; i <= t; i++){

        int a,b;
        scanf("%d %d",&a,&b);
        int area = a*b;
        int i = hcf(a,b);
        int n = area/(i*i);
        printf("%d\n",n);
    }
}