#include <stdio.h>
#include <cs50.h>

void swap(int *a, int *b);

int main(void) {
    int x = 5;
    int y = 6;

    printf("x: %i and y: %i\n", x, y);
    swap(&x, &y);
    printf("x: %i and y: %i\n", x, y);

}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}