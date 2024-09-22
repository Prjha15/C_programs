#include<stdio.h>
int square(int a){
return a*a;
}
int main(){
    int x;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&x);
    int square1=square(x);
    printf("Square is %d",square1);
    return 0;
}