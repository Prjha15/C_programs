#include<stdio.h>
int main(){
int target_sum;
int i;
int arr[4]={1,2,9,5};
printf("ENTER THE TARGET_SUM");
scanf("%d",& target_sum);
for(int i=0;i<=4;i++){
    for(int j=0;j<=4;j++){
    if(arr[i] +arr[j]==target_sum && i!=j){
        printf("%d\n",i,j);
    }
}
}
    return 0;
}