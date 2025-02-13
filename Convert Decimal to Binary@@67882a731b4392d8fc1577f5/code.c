#include<stdio.h>
void printBinary(int n){
    for(int i =31; i>= 0; i--){
        if(n &(1<<i)){
            printf("i");
        }else if(i<31){
            printf("0");
        }
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d", &n);
    printBinary(n);
    return 0;
}