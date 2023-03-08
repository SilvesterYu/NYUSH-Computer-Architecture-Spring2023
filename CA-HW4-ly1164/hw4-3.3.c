#include <stdio.h>
#include "arrayfuncs.h"

void insertion_sort(int a[], int n) {
    // the curent value to compare with all previous values
    int cur;
    // index of the vlaue in the previous part of the array that's being compared to the current value above
    int k;
    // start iterating from the second element because the leading element has nothing to compare to
    for (int m=1; m<n; m++) {
        // keep a copy of the current value because we shift elements backwards to insert
        cur = a[m];
        // start comparing from the previous elements, towards the start of the array
        k = m - 1;
        while (a[k] > cur && k >= 0) {
            a[k+1] = a[k];
            k --;
        }
        // insertion here
        a[k+1] = cur;
    }
}

/* 
    to test that it works correctly when duplicate values exist
    just input several dupllicate values
*/

int main(){
    int len; 
    printf("Please input an integer of your choice as your array length: \n");
    scanf("%d", &len);
	int arr[len]; 
    read_array(arr, len);
    printf("Unsorted array - ");
    print_array(arr, len);

    insertion_sort(arr, len);

    printf("Sorted array - ");
    print_array(arr, len);

    return 0;
}