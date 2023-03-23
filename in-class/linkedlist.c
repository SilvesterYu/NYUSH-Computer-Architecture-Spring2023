#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <inttypes.h>

struct cell {
 int key;
 struct cell *next;
};

void print_list (struct cell *cell){
 if (cell == NULL) {
 printf("the list is empty\n");
 return;
 }
 // as long as the empty list is not reached
 while (cell != NULL){
 printf("%d ", cell -> key); // print the key
 cell = cell -> next; // move to next cell
 }
 printf("\n"); // go to the next line
}

int length_list (struct cell *cell){
 int len = 0;
 // as long as the pointer to NUll (indicating the end) is not reached
 while (cell != NULL){
 len++; // increment length
 cell = cell -> next; // move to the next cell
 }
 return len;
}

// the new cell is appenede before the old one
struct cell *append_list(struct cell *oldCell, int n){
    // creates a new pointer to the cell struct
 struct cell *newCell;
 // explicitly allocate space for the cell on the heap
 // malloc returns a pointer of type void that holds the address of the first byte in the allocated memory.
 newCell = malloc(sizeof(struct cell));
 // newCell = struct cell * malloc(sizeof(struct cell))
 // puts actual value inside the cell
 newCell -> key = n;
 // connects with the old starting point of the linked list
 newCell -> next = oldCell;
 // rturns the new starting point of the linked list
 printf("added value %d\n", newCell -> key);
 return newCell;
}

// remove the newest (first) element
struct cell *free_cell(struct cell *head){
 // exit when there is nothing to remove, empty list
 if (head == NULL){
    printf("nothing to free! empty list!!\n");
    exit(EXIT_FAILURE);
 }
 // when the list is not empty, create a new pointer to the struct cell as the new "head" pointer
 struct cell *newhead;
 int val = head -> key;
 // pass the address of the next cell to the new "head" pointer
 newhead = head -> next;
 // now the original cell pointer can be cleared
 free(head);
 printf("freed cell with value %d\n", val);
 // it is not good practice to directly return next without freeing the head cell of the list, 
 return newhead;
}

// free the whole list
void free_list(struct cell *head){
 printf("freeing list ");
 struct cell *newhead;
 while (head != NULL){
   printf("%d ", head -> key);
   newhead = head -> next;
   free(head);
   head = newhead;
 }
 printf("\nfreed the above list\n");
}

int main(){
 struct cell *cell = NULL; // empty list [ ]
 print_list(cell);
 cell = append_list(cell, 75);
 cell = append_list(cell, 68);
 cell = append_list(cell, 168);
 cell = append_list(cell, 1168);
 cell = append_list(cell, 18);
 cell = append_list(cell, 5);
 cell = append_list(cell, 24);
 cell = append_list(cell, 17);
 // will print from new to old cells
 print_list(cell);
 cell = free_cell(cell);
 print_list(cell);
 cell = free_cell(cell);
 print_list(cell);
 cell = free_cell(cell);
 print_list(cell);
 cell = append_list(cell, 92);
 print_list(cell);
 cell = free_cell(cell);
 print_list(cell);
//  cell = free_cell(cell);
//  print_list(cell);
//  cell = free_cell(cell);
//  print_list(cell);
//  cell = free_cell(cell);
//  print_list(cell);
//  cell = free_cell(cell);
//  print_list(cell);
//  cell = free_cell(cell);
//  print_list(cell);
//  cell = free_cell(cell);
//  print_list(cell);
//  cell = free_cell(cell);
//  print_list(cell);
free_list(cell);

// practice
// %d %i Decimal signed integer
// %o Octal integer
// %x %X Hex integer
// %u Unsigned integer
// %ld Long decimal signed integer
// %lu Long unsigned integer
// %c Character
// %s String
// %f Double
// %p Pointer
// %zu Size of a type

printf("\n");
struct cell *head = NULL; // empty list [ ]
char source[] = "eeksForGeeks";
char* target2;
printf("empty char* target2 %p\n", target2);
char* target = strdup(source);
printf("pointer to first char of source %p\n", &source);
printf("value that target is pointed at %d\n", *target);
printf("char string that target is pointed at %s\n", target);
printf("%p\n", target);
target2 = &(*target);
printf("%p\n", target2);

printf("address of target in hex %p\n", &target);
printf("address stored in target in hex %p\n", target);

printf("address of target2 in hex %p\n", &target2);
printf("address stored in target2 in hex %p\n", target2);

char source2[] = "testing";
target2 = &(*source2);
printf("new address for target2\n");
printf("address of target2 in hex %p\n", &target2);
printf("address stored in target2 in hex %p\n", target2);

int myvar = 38;
int myvar2 = myvar;
printf("address of myvar %p\n", &myvar);
printf("address of myvar2 %p\n", &myvar2);

int i = 42; // variable int
int *p; // pointer towards an int variable
p = &i; // the address of i is stored in p
printf("value of i : %d\n", i); // print 42
printf("value of i, via p : %d\n", *p); // print 42
*p = 17; // store a value in the address of i
 // and thus in i
printf("value of i : %d\n", i); // print 17
printf("value of i, via p : %d\n", *p); // print 17

printf("loc stored in pointer p : %p\n", p); // print 17
p=&myvar;
printf("loc stored in pointer p : %p\n", p); // print 17


/// practice end
return 0;
}
