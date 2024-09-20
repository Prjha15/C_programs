#include<stdio.h>
int main(){
    int n,i,target_number;
    printf("ENTER THE VALUE OF n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
    printf("ENTER ELEMENTS");
    scanf("%d",&arr[i]);
    }
    printf("ENTER THE NUMBER TO BE SEARCHED");
    scanf("%d",&target_number);
    for(i=0;i<=n-1;i++){
        int low=0;
        int high=n-1;
        int mid=(low+high)/2;
        if(arr[mid]<target_number){
        low=mid+1;
        high=n-1;
        }
        if(arr[mid]>target_number){
                low=0;
                high=mid-1;        
        }
    if(target_number==arr[i]){
        printf("THE NUMBER IS AT INDEX %d",i);
    }
    }
    return 0;
}