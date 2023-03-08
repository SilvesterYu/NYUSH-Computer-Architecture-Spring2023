#include <stdio.h>

int main(){
    // the int type caused an overflow here that is why there are negative outputs
    int result = 1;
    // multiply all the way up to 20
    for (int i=1; i<=20; i++){
        result = result*i;
        // some results are incorrect due to overflow
        printf("%d ! = %d\n", i, result);
    }
    return 0;
}