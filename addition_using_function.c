#include<stdio.h>
int addition(int a,int b){
    return a+b;
}
int main(){
    int x,y;
    printf("ENTER THE VALUE OF x");
    scanf("%d",&x);
    printf("ENTER THE VALUE OF y");
    scanf("%d",&y);
    int sum=addition(x,y);
    printf("sum is %d",sum);
    return 0;
}