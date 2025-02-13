#include <stdio.h>

void printBinary(int n) {
    // Iterate through each bit of the number starting from the most significant bit
    for (int i = 31; i >= 0; i--) {
        // Use bitwise AND to check if the bit at position i is 1 or 0
        if (n & (1 << i)) {
            printf("1");
        } else if (i < 31) { // Don't print leading zeros
            printf("0");
        }
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
