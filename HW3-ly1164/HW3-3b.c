#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned)time(NULL));
    for (int i=0; i<10; i++){
        printf("%d ", rand() % 6 + 1);
    }
    printf("\n");
    return 0;
}