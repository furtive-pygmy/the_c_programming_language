#include <stdio.h>
#include <stdlib.h>
#define IN 1
#define OUT 0
#define MAX  10 

int main(int argc, char *argv[])
{
    int i, nc, c, state;
    int length[MAX];
    nc = 0;
    state = OUT;

    for (i = 0; i < MAX; i++) {
        length[i] = 0;
    }

    while((c = getchar()) != EOF) {
        if (c != ' ') {
           ++nc; 
        }
        if (c == ' ' && state == IN) {
            ++length[nc];
            state = OUT;
            nc = 0;
        } else if (c != ' ') {
            state = IN;
        } 
    }

    if (state == IN) {
        ++length[nc];
    }

    for (i = 0; i < MAX; i++) {
        printf("lengths: %d\n", length[i]);
    }

    return EXIT_SUCCESS;
}