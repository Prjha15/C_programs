#include<stdio.h>
int main(){
    int n;
    int minindex,c;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("ENTER THE ELEMENTS");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n;i++){
        int minindex=i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[minindex]>arr[j]){
               minindex=j;
            }
        }
    if (minindex != i) {
            c= arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = c;
        }
    }
    for(int i=0;i<=n-1;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}