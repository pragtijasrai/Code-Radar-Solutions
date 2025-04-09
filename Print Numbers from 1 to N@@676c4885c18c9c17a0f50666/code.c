#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("%d ", i); // Print each number followed by a space
    }

    printf("\n"); // End with a newline
    return 0;
}
