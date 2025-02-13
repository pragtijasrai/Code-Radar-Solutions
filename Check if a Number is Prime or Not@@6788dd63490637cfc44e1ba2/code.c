#include <stdio.h>

int main() {
    int num, i;
    scanf("%d", &num);
    if (num <= 1) {
        printf("not prime\n");
        return 0;
    }

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("not prime\n");
        }else{
            printf("Prime\n");
        }
        return 0;
    }
}
    
