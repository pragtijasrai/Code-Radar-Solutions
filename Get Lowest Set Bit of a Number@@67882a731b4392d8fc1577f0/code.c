#include <stdio.h>

int main() {
    int num;
    // Input the number
    scanf("%d", &num);
    
    // Check if the number is non-zero
    if (num == 0) {
        printf("-1\n");  // No set bit in zero, return -1 as an error or not applicable
        return 0;
    }

    // Position of the lowest set bit
    int position = 0;
    
    // Find the position of the lowest set bit using bitwise AND operation
    // The expression num & (-num) isolates the lowest set bit
    int lowestSetBit = num & (-num);

    // Iterate over the bits to find the position
    while (lowestSetBit > 1) {
        lowestSetBit >>= 1; // Right shift to check the next bit
        position++;
    }

    // Output the position
    printf("%d\n", position);

    return 0;
}
