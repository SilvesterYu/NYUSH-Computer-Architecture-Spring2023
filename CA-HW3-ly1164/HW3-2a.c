#include <stdio.h>

int main(){
    int n;
    printf("Enter a number to compute its factorial: ");
    scanf("%d", &n);
    // compute the factorial ony if the number is valid for factorial computation
    if ((n >= 1)){
        // initialize factorial result
        int result = 1;
        for (int i=1; i<=n; i++){
            // multiply from 1 all the way up to n
            result = result*i;
        }
        printf("Factorial of %d equals %d \n", n, result);
    } else {
        printf("Please enter a positive integer!\n");
    }
    return 0;
}