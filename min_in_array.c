#include<stdio.h>
int main(){
    int arr[5]={23,86,10,45,77};
    int min;
    min=arr[0];
    int i;
    for (i=0;i<=4;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("MINIMUM AMONG ELEMENTS IS %d",min);
    return 0;
}