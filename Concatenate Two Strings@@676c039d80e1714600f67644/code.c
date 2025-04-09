#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    char result[2000];
    int i = 0, j = 0;

    // Read two lines of input
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove trailing newline from str1 if present
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    // Copy str1 to result
    i = 0;
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Append str2 to result
    j = 0;
    while (str2[j] != '\0' && str2[j] != '\n') {
        result[i] = str2[j];
        i++;
        j++;
    }

    // Null-terminate the result string
    result[i] = '\0';

    // Print the concatenated string
    printf("%s\n", result);

    return 0;
}
