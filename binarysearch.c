#include<stdio.h>
void createarray(int arr[],int n){
    printf("enter %d elements:\n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("array elemments are:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
}
int binarysearch(int arr[],int n,int key){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
int n,key;
printf("enter size:\n");
scanf("%d",&n);
int arr[n];
createarray(arr,n);
printf("enter key to search:\n");
scanf("%d",&key);
int result=binarysearch(arr,n,key);
if(result!=-1){
    printf("element %d found at %d\n",key,result);
}
else{
    printf("element not found");
}
return 0;




}
