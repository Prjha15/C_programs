#include<stdio.h>
int main(){
    int n,i,x;
    printf("ENTER THE VALUE OF n");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE VALUE OF x");
    scanf("%d",&x);
    for(int i=0;i<=n-1;i++){
    printf("ENTER ELEMENTS");
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x){
            printf("%d",i);
        }
    }
    return 0;
}  
