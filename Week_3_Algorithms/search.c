#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

    typedef struct {
        string name;
        int votes;
    } candidate;

int main(void) {

    int candidate_count = 3;
    candidate candidates[3];
    
    candidates[0].name = "Carter";
    candidates[0].votes = 10;

    candidates[1].name = "Yuliia";
    candidates[1].votes = 8;

    candidates[2].name = "Inno";
    candidates[2].votes = 10;

    int highest_votes = 0;
    for (int i=0; i < candidate_count; i++) {
        if (candidates[i].votes > highest_votes) {
            highest_votes = candidates[i].votes;
        }
    }
    printf("%i ", highest_votes);

    for (int n = 0; n < candidate_count; n++) {
        if (candidates[n].votes == highest_votes) {
            printf("%s\n", candidates[n].name);
            return 0;
        }
    }
}
