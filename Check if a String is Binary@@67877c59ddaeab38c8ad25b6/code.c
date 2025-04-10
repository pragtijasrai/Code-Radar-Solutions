#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int isBinary = 1;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    int hasBinaryDigit = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            continue; // ignore spaces
        } else if (str[i] != '0' && str[i] != '1') {
            isBinary = 0;
            break;
        } else {
            hasBinaryDigit = 1; // found a valid binary digit
        }
    }

    if (!hasBinaryDigit)
        isBinary = 0;

    printf("%s\n", isBinary ? "Yes" : "No");

    return 0;
}
