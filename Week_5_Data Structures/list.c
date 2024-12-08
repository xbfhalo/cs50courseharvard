#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
    string phrase;
    struct node *next;
} node;

#define LIST_SIZE 2

bool unload(node *list);
void visualizer(node *list);

int main() {
    node *list = NULL;

    for (int i = 0; i  < LIST_SIZE; i++) {
        string phrase = get_string("Enter a new phrase: ");
        node *n = malloc(sizeof(node));

        if (n == NULL) {
        return 1;
        }
        (*n).phrase = phrase;
        n->phrase = phrase;
        n->next = NULL;

        n->next = list;
        list = n;

        //VIsuallize list after adding aa node
        visualizer(list);
    }
    if (!unload(list)) {
        printf("Error freeing the list.\n");
        return 1;
    }
    printf("Freed the list.\n");
    return 0;
}

bool unload(node *list) {
    node *ptr = list;
    while(ptr != NULL) {
        ptr = list->next;
        free(list);
        list = ptr;
    }
    return true;
}

void visualizer(node *list){
    printf("\n List Visualizer\n");
    while (list != NULL) {
        printf("list location %p\n", list);
        printf("list phrase %s\n", list->phrase);
        printf("list next %p\n", list->next);
        printf("\n");
        list = list->next;
    }
    return;
}