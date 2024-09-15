#include<stdio.h>
int main(){
    int n,i,j;
    int temp;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("ENTER THE ELEMENTS");
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--){
        for(j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
          
        }
     printf("%d\n",arr[j]);
    }
    
    return 0;
}