#include<stdio.h>
#include<string.h>
int main(){
    int i;
    int max=-1;
    char str[]="521235465765";
    for(i=0;str[i]!='\0';i++){
        if((str[i]-0)%2!=0 && (str[i]-'0')>max){
            max=(str[i]-'0');
        }
    }
    if (max != -1) {
        printf("The largest odd digit is: %d\n", max);
    } else {
        printf("No odd digits found.\n");
    }
    return 0;
}