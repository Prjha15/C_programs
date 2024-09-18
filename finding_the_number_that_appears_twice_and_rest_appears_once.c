#include<stdio.h>
int main(){
    int i;
    int arr[9]={2,7,8,7,2,8,0,1,1};
    int hash[10]={0};
    for(int i=0;i<9;i++){
        hash[arr[i]]=hash[arr[i]]+1;
    }
    for(int i=0;i<9;i++){
     if(hash[i]==1){
        printf("%d\n",i);
     }
    }
    return 0;
}