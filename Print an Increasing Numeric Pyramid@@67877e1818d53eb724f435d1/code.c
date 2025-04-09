#include <stdio.h>

int main() {
    int N, num = 1;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // Print spaces for centering
        for (int space = 1; space <= N - i; space++) {
            printf(" ");
        }

        // Print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            printf("%d", num);
            num++;
            if (j < i) {
                printf(" "); // Space between numbers
            }
        }

        printf("\n");
    }

    return 0;
}
