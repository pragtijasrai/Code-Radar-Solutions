#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // Print spaces for centering
        for (int space = 1; space <= N - i; space++) {
            printf(" ");
        }

        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) {
                printf(" "); // space between numbers
            }
        }

        printf("\n");
    }

    return 0;
}
