#include <stdio.h>

#include "functions.h"

int main() {
    char ch, word[WORDLEN]; //ch - поточний символ, word - масив символів де буде зберігатися слово
    int count = 1; //лічильник, який рахує слова
    ch = getchar(); //отримання першого символа
    while (ch != '.') { //якщо він не '.', то входимо в цикл
        ch = removing_spaces(ch); //прибираємо можливі зайві пробіли
        ch = readword(word, ch); // зчитуємо слово
        if (count % 2 == 1) { //виводимо непарні слова
            printword(word);
        }
        else { //виводимо парні слова
            printRevword(word);
        }
        count++;
    }
    return 0;
}
