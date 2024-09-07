#include<stdio.h>
int main(){
    int n;
    int prime=0;
    printf("enter the value of n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0)
        prime++;
    }
        if(prime==2)
        printf("The number is prime number");
        else{
            printf("The number is not prime number");
        }

   
    
}