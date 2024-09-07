#include<stdio.h>

int i=6;
void num(){
    if(i==0)
    return;
    printf("%d",i);
    i--;
    num();
}
int main(){
    num();
    return 0;
}

