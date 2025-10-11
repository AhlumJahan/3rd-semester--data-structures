#include<stdio.h>
void sortarray(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main(){
int n,i;
printf("enter no. of elements:");
scanf("%d",&n);
int arr[n];
printf("enter %d elements:\n",n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

sortarray(arr,n);
printf("sorted array:");
for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
}



    return 0;
}
