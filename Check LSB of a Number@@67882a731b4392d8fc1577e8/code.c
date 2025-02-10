#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if(num&1){
        printf("set\n");
    }else{
        printf("Not set\n");
    }
    return 0;
}