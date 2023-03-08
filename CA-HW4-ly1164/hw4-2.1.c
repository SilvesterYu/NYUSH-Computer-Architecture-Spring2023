#include <stdio.h>
#include "arrayfuncs.h"

int linear_search(int a[], int length, int val){
    for (int i=0; i<length; i++){
        if (a[i] == val){
            return i;
        }
    }
    return -1;
}

int main(){
    // an arbitrary array
    // int arr[] = {1, 5, 10, 17, 20, 25, 27, 31, 40};
    // calculate array length
    // int len = sizeof(arr)/sizeof(arr[0]);
    // the value to search for
    // int myVal = 17;

    int size; 
    printf("Please input an integer of your choice as your array length: \n");
    scanf("%d", &size);
	int arr[size]; 
    read_array(arr, size);
    print_array(arr, size);
    int myVal;
    printf("Please input an integer as the value to search for: \n");
    scanf("%d", &myVal);

    int idx = linear_search(arr, size, myVal);
    
    if (idx > 0) {
        printf("First occurance of your value is at index %d\n", idx);
    } else {
        printf("Nonexistent value!\n");
    }
    return 0;
}