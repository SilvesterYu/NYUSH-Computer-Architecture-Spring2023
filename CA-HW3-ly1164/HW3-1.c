#include <stdio.h>

int main(){
    int n;
    printf("Enter an number: ");  
    // read the input
    scanf("%d", &n);
    if (n == 42){
        printf("Well done\n");
    } else {
        printf("Lost\n");
    }
    return 0;
}