#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int isBinary = 1;

    // Read entire input line
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if it exists
    str[strcspn(str, "\n")] = '\0';

    // Check each character strictly
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            isBinary = 0;
            break;
        }
    }

    // Final output
    if (isBinary && strlen(str) > 0)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
