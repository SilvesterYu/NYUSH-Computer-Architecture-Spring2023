#include <stdio.h>

void print_array(int a[], int n){
    printf("Your array is: ");
    for (int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void read_array(int a[], int n){
    printf("Please input %d integers to form an array:\n", n);
    for (int i=0; i<n; i++){
        // take input and store in array
         scanf("%d", &a[i]);
    }
}

int main(){
    int size; 
    printf("Please input an integer of your choice as your array length: \n");
    scanf("%d", &size);
	int arr[size]; 
    read_array(arr, size);
    print_array(arr, size);
    return 0;
}