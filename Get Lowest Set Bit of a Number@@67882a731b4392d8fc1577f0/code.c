#include<stdio.h>
int main(){
    int num;
    scan("%d", &num);
    if(num == 0){
        printf("-1\n");
        return 0;
    }
}