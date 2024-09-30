#include<stdio.h>
int main(){
    int arr[5];
    int i;
    int j;
    for (i=0;i<=4;i++){
        printf("ENTER THE ELEMENT  AT %d INDEX",i);
        scanf("%d",&arr[i]);
    }
    int *ptr[5];
    for (i=0;i<=4;i++){
        ptr[i]=&arr[i];
    }
    for (j=0;j<=4;j++){
        ptr[j]=ptr[i];
        printf("%d\n",arr[j]);
    }
    return 0;
}