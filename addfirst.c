// add an element at the beginning of array
#include <stdio.h>
int main()
{

    int i, n;
    int arr[] = {10, 20, 30, 40, 50};
    n = sizeof(arr) / sizeof(arr[0]);
    printf("before adding \n");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }

    // add element we have to shift the elements to right
    int ele;
    printf("enter a new element:");
    scanf("%d", &ele);
    for (i = n - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[0] = ele;
    printf("after adding \n");
    for (i = 0; i <= n; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }

    return 0;
}
