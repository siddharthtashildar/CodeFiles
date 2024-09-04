#include <stdio.h>

int main(){

    int n = 1;

    do{
        if (n == 6){
            n++;
            continue;

        }
        else{
            printf(" %d",n);
        }
        n++;

    }while (n <= 10);

    return 0;
}