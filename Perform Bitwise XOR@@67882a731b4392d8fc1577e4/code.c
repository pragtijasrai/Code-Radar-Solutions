#include <stdio.h>

int main() {
    int num1, num2, result;

    // Input two space-separated integers
    scanf("%d %d", &num1, &num2);

    // Perform bitwise XOR operation
    result = num1 ^ num2;

    // Output the result of the bitwise XOR operation
    printf("%d\n", result);

    return 0;
}
