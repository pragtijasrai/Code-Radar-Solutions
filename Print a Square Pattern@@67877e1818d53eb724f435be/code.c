#include<stdio.h>
int main(){
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}