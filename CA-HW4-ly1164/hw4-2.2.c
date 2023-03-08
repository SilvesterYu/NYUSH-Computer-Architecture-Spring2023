#include <stdio.h>
#include "arrayfuncs.h"

int is_sorted(int a[] , int length){
    // the value currently being iterated
    int cur = a[0];
    // if any next value is smaller than current value, returns false
    for (int i=1; i<length; i++){
        if (a[i] <= cur){
            return 0;
        } else {
            cur = a[i];
        }
    }
    // returns true when every next value is > than current value
    return 1;
}


int main(){
    // an arbitrary strictly sorted array
    // int arr[] = {1, 5, 17, 20, 25, 27, 31, 40};
    // an arbitrary not strictly sorted array
    // int arr2[] = {0, 1, 2, 5, 8, 133, 134, 256, 256, 3000, 1000000, 1000000050};
    int size; 
    printf("Please input an integer of your choice as your array length: \n");
    scanf("%d", &size);
	int arr[size]; 
    read_array(arr, size);

    // calculate array length
    int len = sizeof(arr)/sizeof(arr[0]);
    int res = is_sorted(arr, len);
    print_array(arr, len);
    printf("Is array sorted? %d\n", res);

    return 0;
}