#include <ctype.h>
#include <libhangman/functions.h>
#include <stdio.h>
#include <string.h>

int main()
{
    printf("Hello, you have launched the game 'Hangman'\nIn the game you need "
           "to guess a randomly "
           "selected word in less than 8 attempts,\nentering one letter at the "
           "time.\n");

    FILE* companies;
    int dictionary;
    char* word = NULL;
    int lenWord;
    printf("Choose the dictionary: 1 - culture, 2 - medicine, 3 - religion "
           "life\n");
    int fDict = 0;
    while (fDict != 1) {
        if (scanf("%d", &dictionary)) {
            switch (dictionary) {
            case 1:
                companies = fopen("dictionaries/culture.txt", "r");
                word = choice_word(companies, word, &lenWord);
                fDict = 1;
                break;
            case 2:
                companies = fopen("dictionaries/medicine.txt", "r");
                word = choice_word(companies, word, &lenWord);
                fDict = 1;
                break;
            case 3:
                companies = fopen("dictionaries/religion.txt", "r");
                word = choice_word(companies, word, &lenWord);
                fDict = 1;
                break;
            default:
                printf("Wrong number of a dictionary\nEnter again\n");
                break;
            }
        } else {
            printf("You entered not a number, rerun the program\n");
            exit(0);
        }
    }
    char* correct = malloc(lenWord);
    for (int i = 0; i < lenWord; i++) {
        correct[i] = '_';
    }

    printf("Word to guess: %s\n", correct);
    printf("Guess the letter: \n");
    int flag = 0, live = 8;
    char guess, previous;
    while ((strcmp(word, correct) != 0) && (live != 0)) {
        scanf("%*c%c", &guess);
        if (previous == guess) {
            printf("Same letter, enter another one: \n");
            continue;
        }
        printf("\n");
        flag = word_guessing(word, correct, lenWord, guess);
        if (flag == 0) {
            live--;
            output(live);
            printCorrect(correct, lenWord);
        } else {
            printf("Correct, next one:\n");
            printCorrect(correct, lenWord);
        }
        previous = guess;
    }
    printf("\n");
    printf("Congratulation! You won!\n");

    return 0;
}
