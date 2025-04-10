#include <stdio.h>
#include <string.h>

// Function to reverse characters from index 'start' to 'end' in the string
void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    
    // Read the whole line of input
    fgets(str, sizeof(str), stdin);

    int i = 0, start = 0;

    // Process each word in the string
    while (str[i] != '\0') {
        // If space or end of line is found, reverse the word
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
        i++;
    }

    // Handle the last word if the string doesn't end with a newline
    if (str[i - 1] != '\n' && str[i - 1] != ' ') {
        reverse(str, start, i - 1);
    }

    // Print the result
    printf("%s", str);

    return 0;
}
