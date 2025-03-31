#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the input
    
    for (int i = 1; i <= N; i++) { // Loop through rows
        for (int j = 1; j <= i; j++) { // Print stars for each row
            printf("* ");
        }
        printf("\n"); // New line after each row
    }
    
    return 0;
}