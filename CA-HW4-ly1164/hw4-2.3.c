#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "arrayfuncs.h"

/* 
If the input array is not strictly sorted in increasing order:
(1) the algorithm might not reach the "first" index and return some bigger index
if the array is sorted but not strictly in increasing order, i.e., there are duplicate elements
(2) the algorithm might not be able to find the index even if the value exists in the array
if the array is unsorted, that is, not sorted increasingly at all
*/

int binary_search (int a[], int length, int val){
    int s = 0;
    int b = length - 1;
    int m;
    // non-recursive way to compare val with m and update s and b
    while (s <= b){
        m = floor((s+b)/2);
        if (val == a[m]){
            break;
        } else if (val < a[m]) {
            b = m - 1;       
            //printf("b: %d\n", b);
        } else {
            s = m + 1;
            //printf("s: %d\n", s);
        }
    }
    if (val == a[m]){
        // the value has been found
        return m;
    } else {
        // the value has not een found
        return -1;
    }
}

int main(){
    int len; 
    printf("Please input an integer of your choice as your array length: \n");
    scanf("%d", &len);
	int arr[len]; 
    read_array(arr, len);
    print_array(arr, len);

    // -- test code -- //
    // search for different numbers within array's range
    for (int i=0; i<arr[len-1]; i++) {
        int res = binary_search(arr, len, i+1);
        printf("value %d ", i+1);
        if (res != -1){
            printf("is at index: %d\n", res);
        } else {
            printf("has not been found\n");
        }
    }
    // -- end of test code -- //

    return 0;    
}