#include<stdio.h>
int main(){
    int n,j=0,k=0;
    printf("Enter th no of elements:");
    scanf("%d",&n);

    int ar[n];

    for(int i=0;i<n;i++){
        printf("Enter no %d:",i+1);
        scanf("%d",&ar[i]);
    }

    for( int i=0;i<n;i++){
        if(ar[i]%2==0){
            k++;
        }
        else{
            j++;
        }
    }

    int ar_odd[k],ar_even[j];

    k = 0;
    j = 0;
    for( int i = 0; i<n ;i++){
        if(ar[i]%2==0){
            ar_even[k]=ar[i];
            k++;
        }
        else{
            ar_odd[j]=ar[i];
            j++;
        }
    }
    printf("The even elements are :");
       for(int i = 0;i < k;i++){
            printf("%d ",ar_even[i]);

       }
        printf("\nThe odd elements are :");
        for(int i = 0;i < j;i++){
            printf("%d ",ar_odd[i]);
        }
return 0;
}