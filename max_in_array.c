#include<stdio.h>
int main(){
    int arr[5]={23,56,76,45,77};
    int max;
    int i;
    for (i=0;i<=4;i++){
        max=arr[0];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("MAXIMUM AMONG ELEMENTS IS %d",arr[i]);
    return 0;
}