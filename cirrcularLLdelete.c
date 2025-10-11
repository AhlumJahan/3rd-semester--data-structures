#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void lltraverse(struct node *head){
    struct node *ptr=head;
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
while(ptr!=head);
}//1 case
struct node *deleteinitial(struct node *head){
    struct node *ptr=head;
    struct node *p=head->next;
    while(p->next !=head){
        p=p->next;
    }
    p->next=head->next;
    head=head->next;
    free(ptr);
    return head;
}
//2case
struct node *deletelast(struct node * head){
    struct node *ptr=head;
    struct node *p=head;
    struct node *q=p->next;
    while(q->next!=head){
        p=p->next;
        q=q->next;}
p->next=head;
free(q);
return head;
}
struct node *deleteanyindex(struct node *head,int index){
    struct node *ptr=head;
    struct node *p=head->next;
    for(int i=0;i<index-1;i++){
        ptr=ptr->next;
        p=p->next;
    }
    ptr->next=p->next;
    free(p);
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
    ptr=newnode;
}


    }ptr->next=head;

lltraverse(head);
printf("after delete\n");
// head=deleteinitial(head);
head=deletelast(head);
    head=deleteanyindex(head,3);

lltraverse(head);


    
    return 0;
}

