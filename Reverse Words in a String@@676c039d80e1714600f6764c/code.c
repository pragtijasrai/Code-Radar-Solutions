#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    
    // Read the input string
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    char *word_start = NULL;
    char *ptr = str;

    while (*ptr) {
        if (!isspace(*ptr)) {
            if (word_start == NULL)
                word_start = ptr;
        } else {
            if (word_start) {
                reverseWord(word_start, ptr - 1);
                word_start = NULL;
            }
        }
        ptr++;
    }

    // Reverse the last word if string doesn't end with space
    if (word_start) {
        reverseWord(word_start, ptr - 1);
    }

    // Output the modified string
    printf("%s\n", str);

    return 0;
}
