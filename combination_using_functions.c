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
    int r;
    printf("ENTER THE VALUE OF r");
    scanf("%d",&r);
    int factorial1=factorial(n);
    int factorial2=factorial(n-r);
    int factorial3=factorial(r);
    int nCr=(factorial1)/(factorial2*factorial3);
    printf("nCr is %d",nCr);
    return 0;
}