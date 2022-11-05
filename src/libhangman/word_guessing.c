#include <libhangman/functions.h>
#include <stdio.h>
#include <string.h>

int word_guessing(char* word, char* correct, int lenWord, char guess)
{
    int flag = 0;
    if (strcmp(word, correct) == 0)
        return 1;
    for (int i = 0; i < lenWord; i++) {
        if (guess == word[i]) {
            flag = 1;
            for (int i = 0; i < lenWord; i++) {
                if (guess == word[i])
                    correct[i] = guess;
            }
        }
    }
    return flag;
}
