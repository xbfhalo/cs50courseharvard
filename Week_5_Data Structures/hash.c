#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct node
{
    string phrase;
    struct node *next;
} node;

node *table[26];

int hash(string phrase);
bool unload(node *list);
void visualizer(node *list);

int main(void) {
    for (int i = 0; i<3; i++){
        string phrase = get_string("Enter a new phrase ");

        int bucket = hash(phrase);
        printf("%s hashes to %i\n", phrase, bucket);
    }
}

int hash(string phrase) {
    return toupper(phrase[0]) - 'A';
}