#include<stdio.h>
int main(){
    int n;
    int count=0;
    int remainder;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
   
    while(n!=0){
      n=n/10;
      count++;
    
    }
 
    printf("NO. of digits are %d",count);

    
    return 0;
}