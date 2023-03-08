#include <stdio.h>

void print_array(int a[], int n){
    printf("Your array is: ");
    for (int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(){
    // an arbitrary array
    int ar[] = {1, 5, 10, 15, 20, 25, 27, 31, 40};
    // calculate array length
    int len = sizeof(ar)/sizeof(ar[0]);
    print_array(ar, len);
    return 0;
}