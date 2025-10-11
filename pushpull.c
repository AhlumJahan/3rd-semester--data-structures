#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int * arr;
};
int isEmpty(struct stack *s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *s){
    if(s->top==s->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *s,int val){

    if(isFull(s)){
        printf("stack overflow!can't push %d into this stack\n",val);
    }
    else{
        s->top++;
        s->arr[s->top]=val;
    }
}
int pop(struct stack *s){
    if(isEmpty(s)){
        printf("stack underflow! can't pop from the stack");
        return -1;
    }
    else{
        int val=s->arr[s->top];
        s->top--;
        return val;
    }
}
int main(){
struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=5;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size  *sizeof(int));
printf("before pushing empty:%d\n",isEmpty(sp));
printf("before pushing full:%d\n",isFull(sp));
push(sp,1);
push(sp,3);
push(sp,4);
push(sp,6);
push(sp,9);
push(sp,23);//stack overflow ,it will never go into the stack
printf("after pushing empty:%d\n",isEmpty(sp));
printf("after pushing full:%d\n",isFull(sp));
printf("popped %d from the stack",pop(sp));
printf("popped %d from the stack",pop(sp));


    return 0;
}

