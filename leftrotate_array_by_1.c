#include<stdio.h>
int main(){
     int n,i,j;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("ENTER THE ELEMENTS");
        scanf("%d",&arr[i]);
        for (int j=0;j<=n-1;j++){
        arr[j-1]=arr[i];
    }
        printf("%d\n",arr[i]);
    }
    return 0;
}