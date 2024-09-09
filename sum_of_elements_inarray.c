#include<stdio.h>
int main(){
int i;
int arr[5]={4,6,9,8,6};
int sum=0;
for(i=0;i<=4;i++){
    sum=sum+arr[i];
}
printf("SUM OF ELEMENTS IS %d",sum);
    return 0;
}