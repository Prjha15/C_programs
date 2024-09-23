#include<stdio.h>
   int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
       fact=fact*i;
    }
    return(fact);
   }
   int main(){
    int n;
    printf("ENTER THE VALUE OF n");
    scanf("%d",&n);
    int factorial1=factorial(n);
    printf("%d",factorial1);
    return 0;
}