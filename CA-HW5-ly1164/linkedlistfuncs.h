#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int list_member(char *string, struct cell *list){
struct cell *newhead;
int result = 0;
 while (list != NULL){
    if (strcasecmp(list -> key, string) == 0) {
        result = 1;
        break;
    };
   newhead = list -> next;
   list = newhead;
 }
 return result;
}