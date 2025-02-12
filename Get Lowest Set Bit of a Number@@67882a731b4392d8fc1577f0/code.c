#include<stdio.h>
int main(){
    int num;
    scan("%d", &num);
    if(num == 0){
        printf("-1\n");
        return 0;
    }
int position = 0;
int lowestsetbit = num & (-num);
while(lowestsetbit > 1){
    lowestsetbit >>= 1;
    position++;
}
printf("%d\n", position);
return 0;
}