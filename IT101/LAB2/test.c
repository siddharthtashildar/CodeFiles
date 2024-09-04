#include <stdio.h>
#include <stdbool.h>

bool checkTwoChessboards(char* coordinate1, char* coordinate2) {
    char r1 = coordinate1[1] + '0';
    char c1 = coordinate1[0] + 'a';
    char r2 = coordinate2[1] + '0';
    char c2 = coordinate2[0] + 'a';

    bool same = false;
    if ((r1 + c1)%2 == (r2 + c2)%2){
        return true;
    }
    return same;
}

// THIS IS JUST FOR RUNNING IN VS CODE
int main(){

    char test1[2] = "a2";
    char test2[2] = "c3";

    bool check = checkTwoChessboards(test1,test2);
    
    if(check){
        printf("\nTrue\n");
    }
    else{
        printf("\nFalse\n");
    }
    

    return 0;
}
