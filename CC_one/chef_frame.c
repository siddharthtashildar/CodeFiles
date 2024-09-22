#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 1; i <= t; i++){

        int n;
        scanf("%d",&n);
        int A[n];
        for(int j = 0;j < n;j++){
            scanf("%d",&A[j]);
        }
        int len = sizeof(A)/sizeof(A[0]);
    
        for(int k = 0;k<n;k++){
            if(A[k] == A[k+1]){
                len = len -1;
                }
        }

        printf("%d\n",len);

    }

}