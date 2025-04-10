#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a word from index start to end in the string
void reverseWord(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    
    // Read a line of input
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    // Remove newline if present
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    int start = 0;
    for (int i = 0; i <= len; i++) {
        // When a space or end of string is encountered, reverse the word
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
    }

    // Print the modified string
    printf("%s\n", str);

    return 0;
}
