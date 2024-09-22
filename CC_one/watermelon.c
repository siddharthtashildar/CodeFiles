#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    scanf("%d",&n);

    if(n >= 4){
        if(n % 2 == 0){
            printf("YES");

        }
        else{
            printf("NO");
        }
    }
    else{
        printf("NO");
    }

    
}