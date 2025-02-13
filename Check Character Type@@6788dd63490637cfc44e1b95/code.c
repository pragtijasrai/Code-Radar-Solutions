#include<stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("vowel\n");
    }else if ((ch >= 'a' && ch <= 'z') || (ch>='A'&& ch<='Z')){
        printf("Consonant\n");
    }else if(ch >= '0' && ch <= '9'){
        printf("digit\n");
    }else{
        printf("special character\n");
    }
    return 0;
}