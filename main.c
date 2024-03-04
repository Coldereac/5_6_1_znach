#include <stdio.h>

#include "functions.h"

int main() {
    char ch, word[WORDLEN];
    int count = 1;
    ch = getchar();
    while (ch != '.') {
        ch = removing_spaces(ch);
        ch = readword(word, ch);
        if (count % 2 == 1) {
            printword(word);
        }
        else {
            printRevword(word);
        }
        count++;
    }
    return 0;
}
