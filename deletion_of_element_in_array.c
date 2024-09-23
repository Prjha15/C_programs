#include<stdio.h>
int main(){
    int n,i,x;
    printf("ENTER THE VALUE OF n");
    scanf("%d",&n);
    int newindex=n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
    printf("ENTER ELEMENTS");
    scanf("%d",&arr[i]);
    }
    int s;
    printf("ENTER ELEMENT TO BE DELETED");
    scanf("%d",&s);
    for(int i=0;i<=newindex-1;i++){
        if(arr[i]==s){
            for(int j=i;j<newindex-1;j++){
                arr[j]=arr[j+1];
            }
            newindex--;
            i--;
        }
    }
    for(int i=0;i<=newindex-1;i++){
    printf("%d",arr[i]);
    }
return 0;
    }