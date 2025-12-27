#include<stdio.h>
void printarray(int arr[],int n){
printf("array elements are:");
for(int i=0;i<n;i++){
    printf("%d  ",arr[i]);
}
    
printf("\n");
}
int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    int temp;
    do{
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;}
    }while(i<j);
temp=arr[j];
arr[j]=arr[low];
arr[low]=temp;
return j;}
void quicksort(int arr[],int low,int high){
    if(low<high){
    int partitionindex=partition(arr,low,high);
    quicksort(arr,low,partitionindex-1);
    quicksort(arr,partitionindex+1,high);

    }
}

int main(){
    int n,i;
    printf("enter size");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elemnets",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printarray(arr,n);
    quicksort(arr,0,n-1);
    printarray(arr,n);

    return 0;
}
