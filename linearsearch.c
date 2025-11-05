#include<stdio.h>
void createarr(int arr[],int n){
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("array elements are:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++)
        if(arr[i]==key){
            return i;
        }
        return -1;
    }

int main(){
int n,key;
printf("enter size:\n");
scanf("%d",&n);
int arr[n];
createarr(arr,n);
printf("element to search:\n");
scanf("%d",&key);
int result=linearsearch(arr,n,key);
if(result!=-1){
    printf("element %d found at %d",key,result);
}
else{
    printf("element not found");
}





    return 0;
}
