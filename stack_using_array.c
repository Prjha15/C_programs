#include <stdio.h>
#define MAX 5
int data;
int stack[5];
int top=-1;
void push(int data){
    if(top==MAX-1){
        printf("THE STACK IS FULL");
    }
    top=top+1;
    stack[top]=data;
}
int pop(){
    int value;
    if(top==-1){
        printf("STACK IS EMPTY");
        return -1;
    }
     value=stack[top];
    top=top-1;
    return value;
}
int peek(int top_value){
    top_value=stack[top];
    printf("THE TOP ELEMENT IS %d",stack[top]);
    return stack[top];
}
void display(){
    for (int i = 0; i <= top; i++)
    {
       printf("%d\n",stack[i]);
    }

    
}
int main(){
    push(7);
    push(12);
    push(17);
    pop();
    display();
    return 0;
}