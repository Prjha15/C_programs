#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
           for(int k=5;k>=i;k--){
            printf(" ");
        }
          for (int j=1;j<=i;j++){
            printf("*");
          }
          for(int l=1;l<=i-1;l++){
           printf("*",i);
          }
        printf("\n");
    }

          for(int p=1;p<=5;p++){
                printf(" ");
            for(int m=1;m<=p-1;m++){
            printf(" ");
        }
        for(int n=5;n>=p;n--){
            printf("*");
        }
        for(int o=5;o>=p+1;o--){
             printf("*",p);
        }
        printf("\n");
       
    }

    return 0;
}