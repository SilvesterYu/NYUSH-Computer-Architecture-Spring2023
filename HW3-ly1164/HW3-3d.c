#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int counter = 0;
    srand((unsigned)time(NULL));
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            int randNum = rand() % 6 + 1;
            printf("%d ", randNum);
            if (randNum == 6){
                counter ++;
            }
        }
        printf("\n");
    }
    printf("Number of 6's is %d\n", counter);
    return 0;
}