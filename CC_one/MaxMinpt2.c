#include <stdio.h>

int max(int x , int y){
    if(x > y){ return x;}
    else{return y;}
}

int main() {
    
    int t;
    scanf("%d",&t);
    
    for(int g = 1; g <= t; g++){
    
        int N;
        int temp_sum = 0;
        int i = 1;
        scanf("%d",&N);
        while(i <= N){
            if(i == N){
                temp_sum = temp_sum + max(i,i-N);
            }
            else{
                temp_sum = temp_sum + max(i,i+1);
            }
            i++;
        }
        printf("%d\n",temp_sum);
    }
    return 0;
}