#include<stdio.h>
int main(){
    int i;
    int arr[12]={1,10,4,3,4,2,1,2,10,3,2,1};
    int hash[15]={0};
    for(int i=0;i<=11;i++){
        hash[arr[i]]=hash[arr[i]]+1;
    } 
    for (int i = 0; i < 15; i++) {
    if (hash[i] > 0) {
        printf("Element %d occurs %d times\n", i, hash[i]);
    }
}

    return 0;
}