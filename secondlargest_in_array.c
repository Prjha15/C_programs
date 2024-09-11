#include<stdio.h>
int main(){ 
    int arr[4]={44,32,56,82};
    int max=arr[0];
    for(int i=0;i<=3;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    int max2=arr[0];
    for(int i=0;i<=3;i++){
      if (arr[i] != max && arr[i] > max2) {
        max2=arr[i];
      }
    }
    printf("%d",max2);
    return 0;
}