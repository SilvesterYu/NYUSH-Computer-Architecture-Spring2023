#include <stdio.h>
#include <math.h>  
#include "arrayfuncs.h"

int eval(int x, int a[], int n) {
    int res = 0;
    for (int i=0; i<n; i++) {
        res += a[i] * pow(x, i);
    }
    return res;
}

int main(){
    int len; 
    printf("Please input your polynomial length: \n");
    scanf("%d", &len);
	int arr[len]; 
    read_array(arr, len);
    printf("Your polynomial array - ");
    print_array(arr, len);

    int x;
    printf("Please enter an x for polynomial evaluation: \n");
    scanf("%d", &x);

    int res = eval(x, arr, len);
    printf("Your polynomial equals: %d\n", res);

    return 0;
}