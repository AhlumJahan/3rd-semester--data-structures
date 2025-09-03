// add element at the end of an array
#include <stdio.h>
int main()
{
    int n, i;
    int arr[] = {3, 7, 9, 10, 2};
    n = sizeof(arr) / sizeof(arr[0]);
    printf("before adding at end \n");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
    int ele;
    printf("enter element:");
    scanf("%d", &ele);

    arr[n] = ele;//no shifting as it is an end element so we just add it into index n

    printf("after adding element at the end \n");
    for (i = 0; i <= n; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }

    return 0;
}
