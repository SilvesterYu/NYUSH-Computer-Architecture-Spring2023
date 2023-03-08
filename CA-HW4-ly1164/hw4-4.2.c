#include <stdio.h>
#include <math.h>  
#include "arrayfuncs.h"

int eval(int x, int a[], int n) {
    // if we evaluate layer by layer, multiple x once for each layer
    // result initialze to the constant for the highest polynomial
    int res = a[n-1];
    for (int i=1; i<n; i++) {
        // add the value of the next highest polunomial
        res = res * x + a[n-1-i];
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