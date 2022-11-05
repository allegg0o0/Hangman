#include <ctest.h>
#include <libhangman/functions.h>
#include <stdio.h>

CTEST(hangman_suite, test_word_guessing_true)
{
    char char_test = 'e';
    int flag = 0, len_word = 0;
    char word_test[] = "test";
    char correct_test[] = "____";
    while (word_test[len_word] != '\0') {
        len_word++;
    }
    flag = word_guessing(word_test, correct_test, len_word, char_test);
    int res = flag;
    const int exp = 1;
    ASSERT_EQUAL(exp, res);
}

CTEST(hangman_suite, test_word_guessing_false)
{
    char char_test = 'm';
    int flag = 0, len_word = 0;
    char word_test[] = "test";
    char correct_test[] = "____";

    while (word_test[len_word] != '\0') {
        len_word++;
    }
    flag = word_guessing(word_test, correct_test, len_word, char_test);

    int res = flag;
    const int exp = 0;
    ASSERT_EQUAL(exp, res);
}

CTEST(hangman_suite, test_choice_word)
{
    int lenWord_test = 0;
    char* word = NULL;
    FILE* file;
    file = fopen("dictionaries/nature.txt", "r");
    word = choice_word(file, word, &lenWord_test);
    int real = lenWord_test;
    const int exp = 0;
    ASSERT_NOT_EQUAL(exp, real);
}

CTEST(hangman_suite, test_getrand)
{
    int range = 8;
    int real = getrand(range);
    const int exp = 8;
    ASSERT_NOT_EQUAL(exp, real);
}

CTEST(hangman_suite, test_getRange)
{
    FILE* file;
    file = fopen("dictionaries/nature.txt", "r");
    int real = getRange(file);
    const int exp = 19;
    ASSERT_EQUAL(exp, real);
}