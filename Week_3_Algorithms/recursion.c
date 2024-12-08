#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string func_factorial(int val, int start);

int main(void){

    int n;
    do {
        n = get_int("number: ");
    }
    while (n<0);

    printf("%s\n", func_factorial(n, 0));
}

string func_factorial(int val, int start){
    if (start==val) {
        return "well done";
    } else {
        for (int i = 0; i<=start; i++){
            printf("#");
        }
        printf("\n");
        return func_factorial(val, start+1);
    }
}