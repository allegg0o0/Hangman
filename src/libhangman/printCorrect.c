#include <stdio.h>

void printCorrect(char* correct, int lenWord)
{
    for (int i = 0; i < lenWord; i++) {
        printf("%c", correct[i]);
    }
    printf("\n");
}