#include<stdio.h>
void createarray(int arr[],int n){
    printf("enter %d elements",n);
    for(int i=0;i<n;i++){
    
    scanf("%d",&arr[i]);
}
printf("array elemets are:");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");}

void insertionsort(int arr[],int n){
    int key,j;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){//ascending,,,,,descending=arr[j]<key
arr[j+1]=arr[j];
j--;
        }
   arr[j+1]=key;

    }
    
}
int main(){
    int n;
    printf("enter size ");
    scanf("%d",&n);
    int arr[n];
    createarray(arr,n);
    insertionsort(arr,n);
printf("sorted array is:")    ;
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);

}
printf("\n");
    return 0;
}
