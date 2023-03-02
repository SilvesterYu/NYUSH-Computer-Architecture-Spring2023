#include <stdio.h>

int main(){
    // initialize the factorial result as an unsigned long int to avoid overflow
    // a regular int (signed) will cause overflows
    // overflows will cause the program to output incorrect negative results
    int unsigned long result = 1;
    // multiply all the way up to 20
    for (int i=1; i<=20; i++){
        result = result*i;
        // %lu specifies the unsigned long format
        printf("%d ! = %lu\n", i, result);
    }
    return 0;
}
