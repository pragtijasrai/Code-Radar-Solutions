#include <stdio.h>

int main() {
    int N;

    
    scanf("%d", &N);

    
    for (int i = 0; i < N; i++) {
        
        for (int j = 0; j < N - i; j++) {
            printf("1");
        }
        
        for (int k = 0; k < i; k++) {
            printf("1 2");
        }
        printf("\n");
    }

    return 0;
}
