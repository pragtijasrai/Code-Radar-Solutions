#include <stdio.h>

void printBinary(int n) {
    int leadingZero = 1; // Flag to detect leading zeros
    
    // Iterate through each bit of the number starting from the most significant bit
    for (int i = 31; i >= 0; i--) {
        // Use bitwise AND to check if the bit at position i is 1 or 0
        if (n & (1 << i)) {
            printf("1");
            leadingZero = 0; // Once we print a 1, stop printing leading zeros
        } else if (!leadingZero) { // Only print 0s after the first 1
            printf("0");
        }
    }

    if (leadingZero) {
        // Special case when the number is 0
        printf("0");
    }

    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);  // Input the decimal number
    
    // Call the function to print binary representation
    printBinary(n);
    
    return 0;
}
