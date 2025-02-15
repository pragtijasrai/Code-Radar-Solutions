#include<stdio.h>
int main(){
    char a;
    scanf("%c", &a);
    if(a==A){
        printf("Excellent\n");
    }else if(a==B){
        printf("Good\n");
    }else if(a==C){
        printf("Average\n");
    }else if(a==D){
        printf("Below Average\n");
    }else if(a==f){
        printf("Fail");
    }else{
        printf("Invalid grade\n");
    }
    return 0;
}