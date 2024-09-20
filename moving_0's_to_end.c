#include<stdio.h>
int main(){
    int n,i;
    printf("ENTER THE VALUE OF n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
    printf("ENTER ELEMENTS");
    scanf("%d",&arr[i]);
    }
    int p=n-1;
    for(i=0;i<=p;i++){
        if(arr[i]==0){
            while (p > i && arr[p] == 0) {
                p--;
            }
            if(p>i){
            int temp;
            temp=arr[i];
            arr[i]=arr[p];
            arr[p]=temp;
            p--;
            if(p==i){
                arr[p]=arr[i];
                p--;
            }
            }
        }
        
    }
    for(i=0;i<n;i++){
    printf("%d",arr[i]);
    }
    return 0;
}