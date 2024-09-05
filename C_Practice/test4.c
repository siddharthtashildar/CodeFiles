#include <stdio.h>

int main(){
    int n;
    printf("\nENter lenght of array: ");
    scanf("%d",&n);

    int array[n] ;
    int len;

    for(int i = 0; i < n; i++){
        printf("\nENTER ITEM %d : ",i);
        scanf("%d",&array[i]);
    }

    len  = sizeof(array)/sizeof(array[0]);

    for(int j = 0; j < len;j++){

        printf(" %d",array[j]);
    }


    return 0;
}