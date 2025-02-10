#include <stdio.h>

int main() {
    int num, shift_positions, result;

    // Input: the number and the number of positions to shift
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter number of positions to shift: ");
    scanf("%d", &shift_positions);

    // Perform bitwise left shift
    result = num << shift_positions;

    // Output: print the result of the left shift operation
    printf("Result of left shift: %d\n", result);

    return 0;
}
