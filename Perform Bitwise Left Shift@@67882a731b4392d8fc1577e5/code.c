#include <stdio.h>

int main() {
    int num, shift_positions, result;

    // Input: the number and the number of positions to shift
    scanf("%d %d", &num, &shift_positions);

    // Perform the bitwise left shift
    result = num << shift_positions;

    // Output the result of the left shift operation
    printf("%d\n", result);

    return 0;
}
