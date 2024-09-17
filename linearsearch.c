#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int i,num;
    printf("ENTER THE NUMBER");
    scanf("%d",&num);
    for(i=0;i<=4;i++){
        if(num==arr[i]){
            printf("%d is found at %d th index of array",num,i);
        }
    }
    return 0;
}