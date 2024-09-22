#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    for(int i = 1; i <= t; i++){

        int X , H;
        int a = 1;
        int b = 0;
        scanf("%d %d",&X,&H);
        int X2 = X/2;

        while(H != 0 && a <= 5 && H > 0){
            
            if(H < 0){
                break;
            }
            H = H - (X2);
            b = b + 1;
            a = a+1;
            
        }
        if(H != 0 && H > 0){
            while(H != 0){
            H = H - (X);
            b = b + 1;
            if(H < 0){
                break;
            }
        }
        }
        
        printf("%d\n",b);



    }


}