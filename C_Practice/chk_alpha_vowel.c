#include <stdio.h>

int main(){

    char ch;

    printf("Enter your alphabet kiddo: ");
    scanf("%c",&ch);

    char consonants[21] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};

    if(ch){

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            printf("%c is a vowel!",ch);
        }
        else{
            printf("%c is a not a vowel!",ch);
        }
        
    }

    return 0;
}