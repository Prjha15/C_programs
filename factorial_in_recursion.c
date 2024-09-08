#include<stdio.h>
int n,product=1;
int i=1;
int factorial(i,product){
    if(i>n){
        return product;
    }
    return factorial(i+1,product*i);
}
int main(){
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    int result=factorial(1,1);
    printf("%d",result);
    return 0;
}