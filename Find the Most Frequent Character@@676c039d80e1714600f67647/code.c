#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int freq[26] = {0}; // Frequency array for a-z
    char ch;
    int i = 0;

    // Read the input string (including spaces)
    fgets(str, sizeof(str), stdin);

    // Count frequency of each letter
    while (str[i] != '\0') {
        ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
        i++;
    }

    // Find the most frequent character (alphabetically first in case of tie)
    int maxFreq = 0;
    char mostFreqChar = 'a';
    for (i = 0; i < 26; i++) {
        if (freq[i] > maxFreq || (freq[i] == maxFreq && i < (mostFreqChar - 'a'))) {
            maxFreq = freq[i];
            mostFreqChar = 'a' + i;
        }
    }

    printf("%c\n", mostFreqChar);

    return 0;
}
