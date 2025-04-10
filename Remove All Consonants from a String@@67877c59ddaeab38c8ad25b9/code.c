#include <stdio.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);  
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);  

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]) && !isVowel(str[i])) {
            continue;
        } else {
            putchar(str[i]);
        }
    }

    return 0;
}