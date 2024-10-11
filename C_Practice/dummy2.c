#include <stdio.h>

int main() {
    int i = 0;

    for (i = 0; i < 20; i++) {
        printf("i --> %d\n",i);
        switch (i) {
            case 0:
                i += 3;
              
            case 1:
                i += 2;
                 break;
            case 5:
                    i += 6;
             
            default:
                i += 4;  
                break;
        }
        printf("%d\n", i);
    }

    return 0;
}