#include <stdio.h>

int main() {
    char str[1000];
    int length = 0;

    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    printf("%d\n", length);

    return 0;
}
