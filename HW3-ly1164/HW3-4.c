#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n;
    printf("Enter a number see the first n fibonacci numbers: ");
    scanf("%d", &n);
    // print the fibonacci sequence if the number is a positive integer
    // the sequence starts from year 0
    if (n == 1){
        printf("1 1\n");
    } else if (n >= 2) {
        int unsigned long first = 1;
        int unsigned long second = 1;
        printf("1 1 ");
        for (int i=2; i <= n; i++){
            int unsigned long temp = second;
            second = first + temp;
            first = temp;
            printf("%lu ", second);
        }
        printf("\n");
    } else {
        printf("Please enter a positive integer!\n");
    }
    return 0;
}