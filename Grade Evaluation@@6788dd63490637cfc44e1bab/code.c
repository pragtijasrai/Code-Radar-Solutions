#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a==A){
        printf("Excellent");
    }else if(a==B){
        printf("Good");
    }else if(a==C){
        printf("Average");
    }else if(a==D){
        printf("Below Average");
    }else if(a==F){
        printf("Fail");
    }else if(a==6){
        printf("Saturday");
    }else if(a==7){
        printf("Sunday");
    }else{
        printf("Invalid");
    }
    return 0;
}