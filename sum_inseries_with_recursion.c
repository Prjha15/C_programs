#include<stdio.h>
int n,sum=0;
int i=1;
void num(i,sum){
    if(i>n){
        return ;
    }
    printf("%d\n",(sum+i));
    num(i+1,sum+i);
}
int main(){
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    num(i,sum);
    return 0;
}