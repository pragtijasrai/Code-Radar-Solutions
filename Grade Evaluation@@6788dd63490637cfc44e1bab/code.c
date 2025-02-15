#include <stdio.h>

int main() {
    char grade;
    scanf("%c", &grade);
    if (grade == 'a' || grade == 'A') {
        printf("Excellent\n");
    } else if (grade == 'b' || grade == 'B') {
        printf("Good\n");
    } else if (grade == 'c' || grade == 'C') {
        printf("Average\n");
    } else if (grade == 'd' || grade == 'D') {
        printf("Below Average\n");
    } else if (grade == 'f' || grade == 'F') {
        printf("Fail\n");
    } else {
        printf("Invalid grade\n");
    }
    
    return 0;
}
