#include<stdio.h>
int main(){
    int first=0;
    int arr[6]={2,0,2,1,1,0};
    for(int i=0;i<=5;i++){
        if(arr[i]==0){
            int temp;
            temp=arr[first];
            arr[first]=arr[i];
            arr[i]=temp;
            first++;
        }
    }
    for(int i=0;i<6;i++){
        printf("%d",arr[i]);
    }
    return 0;
}