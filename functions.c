//
// Created by malinka on 3/4/24.
//

#include "functions.h"

#include <stdio.h>

char removing_spaces(char ch) {
    while (ch == ' ') {
        ch = getchar();
    }
    return ch;
}

char readword(char * word, char ch) {
    int i = 0;
    while (ch != ' ' && ch != '.') {
        word[i++] = ch;
        ch = getchar();
    }
    word[i] = '\0';
    return ch;
}

void printword(char * word) {
    for (int i = 0; word[i] != '\0'; i ++) {
        putchar(word[i]);
    }
    putchar(' ');
}

void printRevword(char * word) {
    for(int i = findlength(word)-1; i >= 0; i --) {
        putchar(word[i]);
    }
    putchar(' ');
}

int findlength(char * word) {
    int length = 0;
    while (*word++ != '\0') {
        length++;
    }
    return length;
}