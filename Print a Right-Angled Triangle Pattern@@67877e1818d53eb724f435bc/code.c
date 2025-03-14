#include <stdio.h>

int main() {
    int N;

    // Take input for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Loop through each row
    for (int i = 1; i <= N; i++) {
        // Print stars in each row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
