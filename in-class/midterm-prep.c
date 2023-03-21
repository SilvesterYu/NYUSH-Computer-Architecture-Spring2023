#include <stdio.h>
#include <stdlib.h>

// void swap(int x, int y){
// int tmp;
// tmp = y;
// y = x;
// x = tmp;
// }

// int main()
// {
// int a = 42;
// int b = 17;
// int n = 5;
// printf("a=%d b=%d \n", a , b);
// swap(a,b);
// printf("a=%d b=%d \n", a , b);
// return 0;
// }


void swapbyptr(int *xptr, int *yptr){
int tmp;
tmp = *yptr;
*yptr = *xptr;
*xptr = tmp;
}

int main()
{
int a = 42;
int b = 17;
int n = 5;
printf("a=%d b=%d \n", a , b);
swapbyptr(&a,&b);
printf("a=%d b=%d \n", a , b);
return 0;
}