#include<stdio.h>
int main(){
    int arr[9]={1,1,2,2,2,3,3,4,4};
    int i;
    int hash[5]={0};
    for(int i=0;i<=8;i++){
        if(arr[i]!=arr[i+1]){
            hash[arr[i]]=arr[i];
         printf("%d\n",hash[arr[i]]);
        }
    }
    return 0;
}