#include<stdio.h>
int average(int a,int b, int c){
     return (a+b+c)/3;
}
int main(){
    int x,y,z;
    printf("ENTER THE VALUE OF x");
    scanf("%d",&x);
    printf("ENTER THE VALUE OF y");
    scanf("%d",&y);
    printf("ENTER THE VALUE OF z");
    scanf("%d",&z);
    float average1=average(x,y,z);
    return 0;
}