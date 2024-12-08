#include <stdio.h>
#include <cs50.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, string argv[]){

    string filename = argv[1];
    FILE *f = fopen(filename, "r");
    
    uint8_t buffer[4];
    int fs = fread(buffer, 1, 4, f);
    for (int i = 0; i<4; i++) {
        printf("%i\n", buffer[i]);
    }
    printf("%i", fs);
    fclose(f);
}