#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Weird and awesome";
    int length = strlen(str); 
    for(int i=0;i<=length/2;i++){
        int temp=str[i];
        str[i]=str[length-1-i];
        str[length-1-i]=temp;
    }
     printf("%s",str);
    return 0;
}