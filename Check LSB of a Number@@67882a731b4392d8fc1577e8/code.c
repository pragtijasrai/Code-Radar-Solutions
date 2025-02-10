#include <stdio.h>

int main() {
    int num;

    // Input the number
    scanf("%d", &num);

    // Check if the least significant bit is set (1) or not (0)
    if (num & 1) {
        printf("set\n");  // If LSB is 1
    } else {
        printf("Not set\n");  // If LSB is 0
    }

    return 0;
}
