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
void selectionsort(int arr[],int n){
    int minindex,temp;
    for(int i=0;i<n-1;i++){
        minindex=i;
    
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minindex]){
            minindex=j;
        }

      } 
      temp=arr[i];
      arr[i]=arr[minindex];
      arr[minindex]=temp;
     }
}
int main(){
    int n;
    printf("enter size ");
    scanf("%d",&n);
    int arr[n];
    createarray(arr,n);
    selectionsort(arr,n);
printf("sorted array is:")    ;
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);

}
printf("\n");
    return 0;
}
