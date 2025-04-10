#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int isBinary = 1;

    // Read the input string including spaces (if any)
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove trailing newline if present

    // Check each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            isBinary = 0;
            break;
        }
    }

    // Output the result
    if (isBinary)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
