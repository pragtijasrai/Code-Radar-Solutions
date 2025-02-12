#include <stdio.h>

int count_leading_zeros(unsigned int num) {
    int count = 0;
    // Loop to check each bit starting from the most significant bit
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            break;  // As soon as we encounter a 1, we stop counting
        }
        count++;
    }
    return count;
}

int main() {
    unsigned int num;
    // Reading input
    scanf("%u", &num);
    
    // Counting leading zeros and printing the result
    printf("%d\n", count_leading_zeros(num));
    
    return 0;
}
