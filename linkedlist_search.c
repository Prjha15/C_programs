#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
int search(){
    int n;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    return n;
}
void traversal(struct node*ptr,int n){
    int count=0;
    while(ptr!=NULL){
    if(ptr->data==n){
        printf("%d IS AT %d",n,count);
    }
     ptr=ptr->next;
     count++;
    }
}
int main(){
    struct node*head=malloc(sizeof(struct node));
    struct node*second=malloc(sizeof(struct node));;
    struct node*third=malloc(sizeof(struct node));;
    head->data=90;
    head->next=second;
    second->data=96;
    second->next=third;
    third->data=99;
    third->next=NULL;
    int n=search();
    traversal(head,n);
    return 0;
}