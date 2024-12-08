#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>


int main(void) {
    
    char *val = "Hello!";
    printf("%c\n", *val);
    printf("%c\n", val[1]);
    printf("%c\n", *(val + 1));

    int *num = malloc(3 * sizeof(int));
    num[0] = 12;
    num[1] = 3;
    num[2] = 5;
    printf("%p\n", num);
    printf("%i\n", *num);
    printf("%i\n", num[1]);
    printf("%i\n", *(num+1));
    free(num);

    int x;
    int y;
    x = 23;
    int *p = &x;
    printf("%p\n", p);

    int *x2;
    int *y2;

    x2 = malloc(sizeof(int));

    *x2 = 43;
    y2 = x2;

    *y2 = 12;
    printf("%i\n", *x2);
    free(x2);

    int *instance = malloc(sizeof(int) * 10);
    *(instance + 1) = 1;
    printf("%i", *instance+1);


}