#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char str[]="521235465765";
    for(i=0;i<=13;i++){
        if((str[i]-0)%2!=0){
            printf("%c\n",str[i]);
        }
    }
    return 0;
}