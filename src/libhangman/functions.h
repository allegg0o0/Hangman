#pragma once
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void output(int live);
int getRange(FILE* companies);
int getrand(const int range);
int word_guessing(char* word, char* correct, int lenWord, char guess);
char* choice_word(FILE* companies, char* word, int* lenWord);
void printCorrect(char* correct, int lenWord);
