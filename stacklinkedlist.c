#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void linkedlinktraversal(struct node *ptr){
    while(ptr!=NULL){
        printf("elements:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int isEmpty(struct node *top){

if(top==NULL){
    return 1;
}
else{
return 0;
}

}
int isFull(struct node *top){
    struct node *p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
struct node *push(struct node *top,int x){
    if(isFull(top)){
        printf("stack overflow");
    }
    else{
        struct node * n=(struct node *)malloc(sizeof(struct node));
        n->data=x;
        n->next=top;
        top=n;
        return top;
    }
}
int pop(struct node **top){
    if(isEmpty(*top)){
        printf("stack underflow");
    }
    else{
        struct node *n=*top;
        *top=(*top)->next;
        int x=n->data;
        free(n);
        return x;

    }
}
int main(){


struct node *top=NULL;
top=push(top,78);
top=push(top,45);
top=push(top,59);
top=push(top,42);
top=push(top,19);
printf("traversal before popping\n");
linkedlinktraversal(top);
int element=pop(&top);
printf("popped element is  %d\n:",element);


linkedlinktraversal(top);



    return 0;
}
