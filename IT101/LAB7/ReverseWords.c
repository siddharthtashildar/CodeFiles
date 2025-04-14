#include <stdio.h>
#include <string.h>

int main() {
    
    char str[] = "sky is blue";
    char NewStr[100];
    char words[3][4];
    int index = 0;
    int secIndex = 0;
    int strLen = strlen(str);
    int start = strLen - 1;
    int end = strLen - 1;
    
    // for(int i = 0; i<strLen ; i++){
    //     if(str[i] == ' '){
    //         index++;
    //         secIndex = 0;
    //     }
    //     words[index][secIndex] = str[i];
    // }
    // for(int j = 0;j<3;j++){
    //     for(int k = 0 ; k < strlen(j))
    // }

    while(start >= 0){
        while(start >=0 && str[start] != ' '){
            start--;
        }
        for(int i = start+1 ; i<=end ; i++){
            NewStr[index] = str[i];
            index++;
        }
        if (start > 0) {
            NewStr[index] = ' ';
            index++;
        }
        end = start - 1;
        start = end;

    }
    NewStr[index] = '\0';

    printf("\nYour Original String: %s\n",str);
    printf("Your Reversed String: %s\n",NewStr);
    return 0;
}


// Q. Reverse words in a string 

// Input : "sky is blue"
// Output: "blue is sky"

// (There will be no leading or trailing spaces, and there is only one space between words)