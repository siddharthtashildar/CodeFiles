#include <stdio.h>
#include <string.h>


int main(){

    int t;
    scanf("%d",&t);

    for(int i = 1; i<= t; i++){
        char word[100];
        scanf("%s",&word);
        int len = strlen(word);

        if(len > 10){
            char a = word[0];
            char b = word[len-1];
            char c = len - 2;
            printf("%c%d%c\n",a,c,b);
        }
        else{
            printf("%s\n",word);
        }
    }



}