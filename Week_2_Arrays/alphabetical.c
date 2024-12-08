#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    string phrase = get_string("Enter a phrase: ");
    for (int i = 0, length = strlen(phrase); i < length - 1; i++)
    {
        // Check if characters are Not alphbetical
        if (phrase[i] > phrase[i + 1])
        {
            printf("Not in alphbetical order.\n");
            return 0;
        }
    }
    printf("In alphabetical order.\n");
    printf("\n");
}