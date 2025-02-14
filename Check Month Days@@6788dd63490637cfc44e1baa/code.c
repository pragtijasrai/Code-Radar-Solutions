#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a==1==31){
        printf("January");
    }else if(a==2==28){
        printf("February");
    }else if(a==3==31){
        printf("March");
    }else if(a==4==30){
        printf("April");
    }else if(a==5==31){
        printf("May");
    }else if(a==6==30){
        printf("June");
    }else if(a==7==31){
        printf("July");
    }else if(a==8==31){
        printf("August");
    }else if(a==9==30){
        printf("September");
    }else if(a==10==31){
        printf("October");
    }else if(a==11==30){
        printf("November");
    }else if(a==12==31){
        printf("December");
    }else{
        printf("Invail");
    }
    return 0;
}