#include<stdio.h>
int n,sum=0;
int i=1;
int num(i,sum){
    if(i>n){
        return sum;
    }
    return num(i+1,sum+i);
}
int main(){
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    int result=num(1,0);
    printf("%d",result);
    return 0;
}