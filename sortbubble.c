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
printf("\n");
}
void bubblesort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){//no. of passes=size-1–
        for(int j=0;j<n-1-i;j++){//no. of comparisions
            if(arr[j]>arr[j+1]){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    printf("enter size ");
    scanf("%d",&n);
    int arr[n];
    createarray(arr,n);
    bubblesort(arr,n);
printf("sorted array is:")    ;
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);

}
printf("\n");
    return 0;
}
