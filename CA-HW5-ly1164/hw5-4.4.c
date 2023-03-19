#include "linkedlistfuncs.h"
#define _GNU_SOURCE
#define MAX_LIMIT 200
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ** this function removes non-alphabetical chars! **
char *remove_nonalph(char *line)
{
    // removes non-alphabetical chars
    for (int i = 0, j; line[i] != '\0'; ++i)
    {
        while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0'))
        {
            for (j = i; line[j] != '\0'; ++j)
            {
                line[j] = line[j + 1];
            }
            line[j] = '\0';
        }
    }
    return line;
}

struct cell *read_words(char *filename)
{
    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    };
    printf("retrieving lines from file...\n");
    struct cell *head = NULL;
    // line and its length in the file
    char *line = NULL;
    size_t len = 0;
    size_t read;

    // read line by line and put string into linked list
    while ((read = getline(&line, &len, fp)) != -1)
    {
        // printf("%s\n", line);
        size_t l = strlen(line);

        line = remove_nonalph(line);

        printf("(length %zu) ", l);
        printf("%s\n", line);

        head = cons(line, head);
    }

    fclose(fp);
    if (line)
    {
        free(line);
    }
    return head;
};

int main()
{
    char myfile[] = "usr/share/dict/words";
    struct cell *mylist = read_words(myfile);
    // ssprintf("\n\nThe retrieved list is printed below:\n");
    // print_list(mylist);
    int mylen = list_length(mylist);
    // printf("\n\nLength of the linked list: %d\n", mylen);

    // takes user input
    printf("\nEnter a sentence, max %d characters:\n", MAX_LIMIT);
    char string[MAX_LIMIT];
    fgets(string, 500, stdin);

    // loop through the sentence to check existence
    char *token = strtok(string, " ");
    while (token != NULL)
    {
        token = remove_nonalph(token);
        if (list_member(token, mylist) == 1)
        {
            printf("'%s' is in dictionary\n", token);
        }
        else
        {
            printf("'%s' is not in dictionary\n", token);
        }
        token = strtok(NULL, " ");
    }

    return 0;
};