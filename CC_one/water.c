#include <stdio.h>
#include <string.h>


int main(){

    int t;
    scanf("%d",&t);
    char list[t][100];
    for(int j = 0; j < t;j++){
        scanf("%s",&list[j]);
    }

    for(int i = 1; i<= t; i++){

        int len = strlen(list[i]);

        if(len > 10){
            char a = list[i][0];
            char b = word[len-1];
            char c = len - 2;
            printf("%c%d%c",a,c,b);
        }
        else{
            printf("%s\n",word);
        }
    }



}