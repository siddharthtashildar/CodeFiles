#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    for(int i = 1; i <= t; i++){
        int n,x,y;
        scanf("%d %d %d",&n,&x,&y);

        int a = n/2;
        if(y > x*2){
            if(n%2 ==0){
                printf("%d\n",a * y);
            }
            else{
                printf("%d\n",(a * y) + x);
            }
        }
        else{
            printf("%d\n",x*n);
        }

    }
}