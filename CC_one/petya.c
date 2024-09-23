#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);

    int array[n];

    for(int i = 0; i < n;i++){
        scanf("%d",&array[i]);
    }

    int size = sizeof(array)/sizeof(array[0]);
    int array_rm = array[size-1];

    for(int i = 0 ; i < size ; i++){
        for(int j = i + 1; j < size ; j++){
            if(array[i] == array[j]){
                for(int k = j ; k < size -1 ; k++){
                    array[k] = array[k+1];
                }
                size--;
                j--;
            }
        }
    }
    int rm_pos = 0;


    for(int p = 0; p < size ; p++){
        if (array[p] == array_rm){
            rm_pos = p;
        }
    }
    for (int i = rm_pos - 1; i < size - 1; i++){
        array[i] = array[i + 1];}
    size--;


    printf("\n");
    size++;
    array[size - 1] = array_rm;

    for(int l = 0; l < size ; l++){
        printf("%d ",array[l]);
    }


}