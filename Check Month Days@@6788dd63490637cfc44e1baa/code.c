#include<stdio.h>

int main() {
    int a;
    
    // Taking input for the month number
    scanf("%d", &a);
    
    // Checking for valid months and printing the number of days
    if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12) {
        printf("31");
    } else if (a == 4 || a == 6 || a == 9 || a == 11) {
        printf("30");
    } else if (a == 2) {
        printf("28");
    } else {
        printf("Invalid Month");
    }
    
    return 0;
}
