#include<stdio.h>
int main(){
    int arr[5]={23,56,76,45,77};
    int max;
    max=arr[0];
    int i;
    for (i=0;i<=4;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("MAXIMUM AMONG ELEMENTS IS %d",max);
    return 0;
}
