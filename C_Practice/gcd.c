#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    int c;
    if (a >= b) {
        c = gcd(a - b, b);
    } 
    else {
        c = gcd(a, b - a);
    }
    return c;
}

int main() {
    int a = 2024; // First number
    int b = 1234; // Replace 1234 with the last four digits of your ID
    
    int result = gcd(a, b);
    
    printf("GCD of %d and %d is: %d \n", a, b, result);
    
    return 0;
}