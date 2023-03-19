#include "linkedlistfuncs.h"
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cell *read_words(char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   };
   printf("retrieving lines from file...\n");
   struct cell *head = NULL;
   // line and its length in the file
   char * line = NULL;
   size_t len = 0;
   size_t read;

   // read line by line and put string into linked list
   while ((read = getline(&line, &len, fp)) != -1) {
        printf("(length %zu) ", read);
        printf("%s", line);
        head = cons(line, head);
    }
  
   fclose(fp);
   if (line){
    free(line);
   }
   return head;
};

int main() {
    char myfile[] = "usr/share/dict/words";
    struct cell *mylist = read_words(myfile);
    printf("\n\nThe retrieved list is printed below:\n");
    print_list(mylist);
    int mylen = list_length(mylist);
    printf("\n\nLength of the linked list: %d\n", mylen);
    return 0;
};