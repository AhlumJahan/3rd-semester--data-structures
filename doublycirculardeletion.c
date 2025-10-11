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
struct node *deletefirst(struct node *head){
    struct node *p=head;
    struct node *tail=head->prev;
   head=head->next;
   tail->next=head;
   head->prev=tail;
   free(p);
    return head;
}
//2case
struct node *deletelast(struct node * head){
     struct node *tail=head->prev;
     struct node *newtail=tail->prev;
    newtail->next=head;
    head->prev=newtail;
    free(tail);

return head;
}
//3case
struct node *anypositiondelete(struct node *head,int index){
     struct node *ptr=head;
     int i;
     for(i=0;i<index;i++){
        ptr=ptr->next;
     }
ptr->prev->next=ptr->next;
ptr->next->prev=ptr->prev;
free(ptr);
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
printf("after deletion\n");
head=deletefirst(head);
// head=deletelast(head);
// head=anypositiondelete(head,3);
lltraverse(head);


    
    return 0;
}
