#include<stdio.h>
int main(){
    int i;
    int arr[12]={1,10,4,3,4,2,1,2,10,3,2,1};
    int hash[13]={0};
    for(int i=0;i<=11;i++){
        hash[arr[i]]=hash[arr[i]]+1;
    } 
    int max=0;
    for (int i = 0; i < 13 ; i++) {
        if(hash[i]>max){
        max=hash[i];
    }
    }
    int min=12;
      for (int i = 0; i < 13; i++) {
        if(hash[i]<min && hash[i]>0){
        min=hash[i];
    }
    }
    printf("Highest frequency of any element in array is %d\n",max);
    printf("Lowest frequency of any element in array is %d\n",min);

    return 0;
}