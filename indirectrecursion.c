#include<stdio.h>
void fx(int n);
void gx(int n);
void fx(int n){
    if(n>0){
        printf("%d",n);
        gx(n-1);
    }
}
void gx(int n){
    if(n>0){
        printf("%d",n);
        fx(n/2);
    }
}
int main(){
int n;
printf("enter n :");
scanf("%d",&n);
fx(n);


    return 0;
}
