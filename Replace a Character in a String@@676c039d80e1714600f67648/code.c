#include <stdio.h>

int main() {
    char str[1000];
    char target, replacement;
    int i = 0;

    // Read input string (including spaces)
    fgets(str, sizeof(str), stdin);

    // Read the character to be replaced
    scanf(" %c", &target);  // Space before %c to consume any leftover newline

    // Read the replacement character
    scanf(" %c", &replacement);

    // Replace occurrences of target with replacement
    while (str[i] != '\0') {
        if (str[i] == target) {
            str[i] = replacement;
        }
        i++;
    }

    // Print the modified string
    printf("%s", str);

    return 0;
}
