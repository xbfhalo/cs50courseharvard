#include<stdio.h>
#include<cs50.h>

void print_row(int spaces, int length);

int main(void) 
{
    int height = get_int("Enter the height: ");
    int spaces = height-1;
        for (int y = 1; y < height+1; y++) {
        print_row(spaces, y);
        spaces--;
    }
}

void print_row(int spaces, int length) 
{
    for (int j = 0; j < spaces; j++){
        printf("-");
    }
    for (int i = 0; i < length; i++)
    {
        printf("#");
    }
    printf("\n");
}