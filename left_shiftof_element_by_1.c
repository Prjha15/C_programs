#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
        int temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<=4;i++){
        printf("%d",arr[i]);
    }
    return 0;
}