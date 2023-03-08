#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

int main(){
    srand((unsigned)time(NULL));
    printf("%d\n", rand() % 10 + 1);
    printf("%d\n", rand() % 10 + 1);
    return 0;
}