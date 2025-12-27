#include<stdio.h>
void printarray(int arr[],int n){
printf("array elemnts are:");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");
}

void merge(int arr[],int mid,int low,int high){
    int i,j,k,arr2[100];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
arr2[k]=arr[i];
i++;
k++;
        }
        else{
            arr2[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        arr2[k]=arr[i];
i++;
k++;
     
    }
    while(j<=high){
        arr2[k]=arr[j];
            j++;
            k++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=arr2[i];
    }

}
void mergesort(int arr[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,mid,low,high);
    }
}
int main(){
int n,i;
printf("enter size");
scanf("%d",&n);
int arr[n];
printf("enter %d elements",n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printarray(arr,n);
mergesort(arr,0,n-1);
printarray(arr,n);

    return 0;
}
