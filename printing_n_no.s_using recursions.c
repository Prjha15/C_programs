#include<stdio.h> 
int n;
int i=1;
void num(){
    if(i>n){
      return;
    }
    
    printf("%d",i);
    i++;
    num();

}
int main(){
  
    printf("enter the value of n:");
    scanf("%d",&n);
    num();

    return 0;
}

