#include <libhangman/functions.h>
#include <stdio.h>
#include <time.h>

int getRange(FILE* companies)
{
    int range, ch;
    range = 0;
    while ((ch = fgetc(companies)) && !feof(companies)) {
        if (ch == '\n')
            range++;
    }
    fseek(companies, 0L, SEEK_SET);
    return range;
}

int getrand(const int range)
{
    int n = rand() % range;
    return n;
}

char* choice_word(FILE* companies, char* word, int* lenWord)
{
    word = malloc(sizeof(char) * 15);
    int range, number_word, i = 0, temp;
    char ch;
    srand(time(NULL));
    range = getRange(companies);
    number_word = getrand(range);

    for (temp = number_word; temp; --temp) {
        while ((ch = fgetc(companies)) != '\n') {
        }
    }

    while ((ch = fgetc(companies)) != '\n' && ch != EOF) {
        word[i] = ch;
        i++;
    }
    *lenWord = i;
    return word;
}
