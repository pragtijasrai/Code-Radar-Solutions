#include<stdio.h>
int main(){
    char a;
    scanf("%ch", &a);
    if(a >= 'A' && a<= 'A'){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}