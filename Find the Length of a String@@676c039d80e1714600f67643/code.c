#include <stdio.h>

int main() {
    char str[1000];
    int length = 0;

    // Read the input string
    scanf("%s", str);

    // Iterate through the string until the null terminator
    while (str[length] != '\0') {
        length++;
    }

    // Print the length
    printf("%d\n", length);

    return 0;
}
