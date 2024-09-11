#include<stdio.h>
int main(){ 
    int arr[4]={34,32,56,12};
    int max=arr[0];
    for(int i=0;i<=3;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    int max2=arr[1];
    for(int i=1;i<=3;i++){
        if(arr[i]>max)
        max2=arr[i];
    }
    printf("%d",max2);
    return 0;
}