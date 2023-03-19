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

void print_list (struct cell *cell){
 while (cell != NULL){
 printf("%s\n", cell -> key);
 cell = cell -> next;
 }
}

int list_length(struct cell *list) {
    int len = 0;
    while (list != NULL){
    len++;
    list = list -> next;
    }
    return len;
}


void free_list(struct cell *list) {
struct cell *newhead;
 while (list != NULL){
   newhead = list -> next;
   free (list -> key);
   free(list);
   list = newhead;
 }
}

int main(){
    struct cell *head = NULL; // empty list [ ]

    head = cons("Today", head);
    head = cons("Weather", head);
    head = cons("Beautiful", head);

    print_list(head);

    //free_list(head);
    //print_list(head);

    //int mylen = list_length(head);
    //printf("length of the list: %d\n", mylen);

    return 0;
}
