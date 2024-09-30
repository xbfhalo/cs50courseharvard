#include<stdio.h>
#include<cs50.h>

// While loop
int main(void)
{
    int i = 0;
    while (i < 10) 
    {
        printf("#");
        i++;
    }

    printf("\n");

    for (int j = 0; j < 4; j++)
    {
        printf("#");
    }

    printf("\n");

    int h = 0;
    do {
        printf("#");
        h++;
    } while (h < 3);
    
    printf("\n");

}
