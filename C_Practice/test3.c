#include<stdio.h>

int main(){
    
    int n,i;

    for(int k=0; k<3;k++){

        printf("\nEnter number of integers: ");
        scanf("%d", &n);

        int integers[n];

        
    
        for(i=0; i < n; i++){
            printf("\nEnter integers: ");
            scanf("%d", &integers[i]);
        }

        printf("Array: \n");
        for(i=0; i<n; i++){
            printf(" %d", integers[i]);}

    }
    return 0;
}