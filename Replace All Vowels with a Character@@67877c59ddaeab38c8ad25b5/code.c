#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    char str[1000];
    char replaceChar;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    scanf(" %c", &replaceChar);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            str[i] = replaceChar;
        }
    }

    printf("%s\n", str);

    return 0;
}