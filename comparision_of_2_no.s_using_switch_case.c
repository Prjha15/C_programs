#include<stdio.h>
void comparision(int x,int y){
        switch(x>y){
        case 1:printf("x is greater than y");
        break;
        case 0: printf("x is lesser than y");
        break;
    }
}
int main(){
    int x,y;
    printf("ENTER THE NUMBER");
    scanf("%d",&x);
    printf("ENTER THE NUMBER");
    scanf("%d",&y);
    comparision(x,y);
    return 0;
}