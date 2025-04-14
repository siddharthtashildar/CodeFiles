#include <stdio.h>
#include <string.h>

int main() {
    
    char str[] = "sky is blue";
    char NewStr[100];

    int index = 0;

    int strLen = strlen(str);
    int start = strLen - 1;
    int end = strLen - 1;
    

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
