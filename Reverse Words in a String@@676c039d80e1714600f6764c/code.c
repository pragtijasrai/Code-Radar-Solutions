#include <stdio.h>
#include <string.h>

void reverseAndPrintWord(char* word, int length) {
    for (int i = length - 1; i >= 0; i--) {
        putchar(word[i]);
    }
}

int main() {
    char str[1000];
    char word[1000];
    int wordLen = 0;

    // Read the input string
    fgets(str, sizeof(str), stdin);

    // Process each character
    for (int i = 0; ; i++) {
        char ch = str[i];

        if (ch == ' ' || ch == '\n' || ch == '\0') {
            // End of a word
            if (wordLen > 0) {
                reverseAndPrintWord(word, wordLen);
                wordLen = 0;
            }
            if (ch == ' ') {
                putchar(' ');
            } else if (ch == '\n' || ch == '\0') {
                break;
            }
        } else {
            word[wordLen++] = ch;
        }
    }

    printf("\n");
    return 0;
}
