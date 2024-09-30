#include<stdio.h>
int main(){
    int arr[5];
    int i;
    int *ptr[5];
    for (i=0;i<5;i++){
        printf("ENTER THE ELEMENT  AT %d INDEX",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=4;i++){
        ptr[i]=&arr[i];
    }
    for(i=4;i>=0;i--){
        printf("%d\n",*ptr[i]);
    }
    return 0;
}