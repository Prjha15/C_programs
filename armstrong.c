#include<stdio.h>
int main(){
    int n;
    int remainder;
    int sum=0;
    printf("ENTER THE VALUE OF NUMBER:");
    scanf("%d",&n);
    int p=n;
    while(n>0){
        remainder=n%10;
        sum=sum+remainder*remainder*remainder;
        n=n/10;
    }
        if(sum==p || n<=9){
            printf("%d is armstrong number",p);
        }
        else{
            printf("%d is not armstrong number",p);
        }
    

    return 0;
}