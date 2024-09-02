#include<stdio.h>
int main(){
    int n;
    int remainder;
    int sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
     remainder=n%10;
     sum=sum*10+remainder;
     n=n/10;
    }
    printf("%d",sum);
    return 0;
}