#include<stdio.h>
void calculation(float x,float y,char operations){
        switch(operations){
        case '+':printf("%.2f",x+y);
        break;
        case '-': printf("%.2f",x-y);
        break;
        case '*':printf("%.2f",x*y);
        break;
        case '/':printf("%.2f",x/y);
    }
}
int main(){
    float x,y;
    char operations;
    printf("ENTER THE NUMBER");
    scanf("%f",&x);
    printf("ENTER THE NUMBER");
    scanf("%f",&y);
    printf("ENTER THE OPERATIONS YOU WANT TO PERFORM");
    scanf(" %c",&operations);
    calculation(x,y,operations);
    return 0;
}