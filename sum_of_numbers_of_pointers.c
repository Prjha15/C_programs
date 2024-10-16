#include<stdio.h>
    int addition(int a,int b,int *p,int *q){
        int sum=*p+*q;
        return (sum);
    }
    int main(){
        printf("ENTER THE VALUES OF a AND b");
        int a;
        scanf("%d",&a);
        int b;
        scanf("%d",&b);
        int sum1=addition(a,b,&a,&b);
        printf("SUM IS %d",sum1);
    return 0;
}