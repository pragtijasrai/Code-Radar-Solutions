#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0};
    int printed[256] = {0};

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (!printed[ch]) {
            printf("%c: %d\n", ch, freq[ch]);
            printed[ch] = 1;
        }
    }

    return 0;
}