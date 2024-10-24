#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
void insert_element( struct node*ptr){
    struct node*temp=malloc(sizeof(struct node));
    temp->data = 67;
    temp->link=NULL;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}
void print(struct node*ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}
int main(){
    struct node*head=malloc(sizeof(struct node));
    head->data=45;
    struct node*first=malloc(sizeof(struct node));
    first->data=31;
    head->link=first;
    struct node*second=malloc(sizeof(struct node));
    second->data=15;
    first->link=second;
    struct node*third=malloc(sizeof(struct node));
    third->data=24;
    second->link=third;
    struct node*fourth=malloc(sizeof(struct node));
    fourth->data=35;
    third->link=fourth;
    fourth->link=NULL;
    insert_element(head);
    print(head);
    return 0;
}