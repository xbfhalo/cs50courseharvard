#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int prefix;
    struct node *next;
} node;

int main(void) {
    node *instance[10];

    // Allocate memory for each node and initialize it
    for (int i = 0; i < 10; i++) {
        instance[i] = malloc(sizeof(node)); // Allocate memory
        if (instance[i] == NULL) { // Check if memory allocation was successful
            fprintf(stderr, "Memory allocation failed\n");
            return 1;
        }
        instance[i]->prefix = i;
        instance[i]->next = NULL;
    }

    // Free the allocated memory to prevent memory leaks
    for (int i = 0; i < 10; i++) {
        free(instance[i]);
    }

    instance[0] = NULL;
    printf("%s", instance[0] == NULL ? "true" : "false");

    return 0;
}
