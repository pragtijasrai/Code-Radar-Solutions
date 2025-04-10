#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i = 0, start;

    // Read full line of input
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    while (str[i] != '\0') {
        // Skip spaces
        while (str[i] == ' ' && str[i] != '\0') {
            i++;
        }

        // Mark start of word
        start = i;

        // Move i to end of the current word
        while (str[i] != ' ' && str[i] != '\0') {
            i++;
        }

        // Now reverse the word between start and i - 1
        int left = start, right = i - 1;
        while (left < right) {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }

    // Print result
    printf("%s\n", str);
    return 0;
}
