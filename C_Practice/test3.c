#include<stdio.h>

int main(){
    
    int  s,i,j;
    for(s=0,i=1; i<7; i+=2){
        for(s+=i, j=2*i; j<5; i++, j *=2){
            s +=i;
            printf("I : %d\n" , i );
            printf("J : %d\n" , j );
            printf("S :  %d\n" , s);
        }
        printf("S after inner loop: %d\n" , s);
    }

    printf("s=%d\n",s);

    return 0;
}