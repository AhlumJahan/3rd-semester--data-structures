#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    
    struct node *prev;
};
void lltraverse(struct node *head){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}//1 case
struct node *initialdeletion(struct node *head){
   struct node *ptr=head;
   head=head->next;
   if(head !=NULL){
    head->prev=NULL;
   }
   free(ptr);
    return head;
}
//2case
struct node *enddeletion(struct node * head){
   struct node *p=head;
   while(p->next !=NULL){
    p=p->next;

   }
   p->prev->next=NULL;
   free(p);
return head;
}
//case3
struct node *deletespecificpos(struct node *head,int index){
   struct node *p=head;
   int i=0;
   while(i<index &&p !=NULL){
    p=p->next;
    i++;
   }
   p->prev->next=p->next;
   if(p->next!=NULL)
   p->next->prev=p->prev;
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
newnode->prev=NULL;

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

lltraverse(head);
printf("after insertion\n");
// head=initialdeletion(head);
// head=enddeletion(head);
head=deletespecificpos(head,3);
lltraverse(head);


    
    return 0;
}
