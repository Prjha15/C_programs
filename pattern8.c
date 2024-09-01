#include<stdio.h>
int main(){
           
    for(int i=1;i<=6;i++){
         for(int k=1;k<=i-1;k++){
            printf(" ");
        }
        for(int j=5;j>=i;j--){
            printf("*");
        }
        for(int l=5;l>=i-1;l--){
             printf("*",i);
        }

    
        printf("\n");
    }
    return 0;

}
