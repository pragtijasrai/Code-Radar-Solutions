#include <stdio.h>

int main() {
    char str[1000];
    int length = 0;

    // Read the full line including spaces
    fgets(str, sizeof(str), stdin);

    // Count characters until newline or null terminator
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Print the length
    printf("%d\n", length);

    return 0;
}
