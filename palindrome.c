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
        sum=sum*10 + remainder;
        n=n/10;
    }
        if(sum==p){
            printf("%d is palindrome",p);
        }
        else{
            printf("%d is not palindrome",p);
        }
    

    return 0;
}