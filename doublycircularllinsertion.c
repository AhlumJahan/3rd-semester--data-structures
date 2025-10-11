#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
void lltraverse(struct node *head){
    struct node *ptr=head;
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
while(ptr!=head);
}//1 case
struct node *firstinsert(struct node *head,int data){
    struct node *p=(struct node *)malloc(sizeof(struct node));
    struct node *tail=head->prev;
    p->data=data;
    p->next=head;
    p->prev=tail;
    head->prev=p;
    tail->next=p;
    head=p;
    return head;
}
//2case
struct node *lastinsert(struct node * head,int data){
     struct node *p=(struct node *)malloc(sizeof(struct node));
    struct node *tail=head->prev;
     p->data=data;
    p->next=head;
    p->prev=tail;
    head->prev=p;
    tail->next=p;

return head;
}
//3case
struct node *anypositioninsert(struct node *head,int data,int index){
     struct node *p=(struct node *)malloc(sizeof(struct node));
     struct node *ptr=head;
     p->data=data;
     int i;
     for(i=0;i<index-1 &&ptr->next!=head;i++){
        ptr=ptr->next;
     }
p->next=ptr->next;
p->prev=ptr;
ptr->next->prev=p;
ptr->next=p;
return head;
}
int main(){
    struct node *head=NULL,*ptr=NULL,*newnode=NULL;
    int n,i,value;
    printf("enter no.of nodes");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        newnode=(struct node *)malloc(sizeof(struct node));

printf("enter data for nodes:%d\n",i+1);
scanf("%d",&value);
newnode->data=value;
newnode->next=NULL;

if(head==NULL){
    head=newnode;
    ptr=head;
}
else{
    ptr->next=newnode;
    newnode->prev=ptr;
    ptr=newnode;
}


    }
    ptr->next=head;
    head->prev=ptr;


lltraverse(head);
printf("after insertion\n");
// head=firstinsert(head,45);
// head=lastinsert(head,36);
head=anypositioninsert(head,89,3);
lltraverse(head);


    
    return 0;
}
