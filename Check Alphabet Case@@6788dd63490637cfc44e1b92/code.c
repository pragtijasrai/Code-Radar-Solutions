#include<stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if(ch >= 'A' && ch<= 'Z'){
        printf("Uppercase");
    }elseif(ch >= 'a' && ch<= 'z'){
        printf("Lowercase");
    }else{
        printf("Not an aplphabet");
    }
    return 0;
}