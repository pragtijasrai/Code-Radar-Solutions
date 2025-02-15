#include <stdio.h>

int main() {
    char grade;
    scanf("%c", &a);
    if ( a == 'R') {
        printf("Stop\n");
    } else if ( a == 'G') {
        printf("Go\n");
    } else if ( a == 'Y') {
        printf("Slow Down\n");
    } else {
        printf("Invalid input\n");
    }
    
    return 0;
}
