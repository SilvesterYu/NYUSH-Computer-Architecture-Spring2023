#include <stdio.h>

int main(){
    // initialize the factorial result
    int result = 1;
    // multiply all the way up to 10
    for (int i=1; i<=10; i++){
        result = result*i;
        printf("%d ! = %d\n", i, result);
    }
    return 0;
}