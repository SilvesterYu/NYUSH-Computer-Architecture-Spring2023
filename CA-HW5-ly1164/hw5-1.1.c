#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct cell{
char *key;
struct cell *next;
};

// head append
struct cell *cons(char *string, struct cell *list){
    // new cell pointer to the new head allocated
    struct cell *newhead = malloc(sizeof(struct cell));
    newhead -> key = strdup(string);
    newhead -> next = list;
    return newhead;
}

int main(){
    struct cell *head = NULL; // empty list [ ]
    char mystring[] = "Where";

    head = cons(mystring, head);

    return 0;
}
