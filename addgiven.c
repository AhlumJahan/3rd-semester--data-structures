// add at given position in the array
#include <stdio.h>
int main()
{
    int n, i;
    int arr[] = {3, 7, 9, 10, 2};
    n = sizeof(arr) / sizeof(arr[0]);
    printf("before adding at any position\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
    int pos, ele;
    printf("enter element and position\n:");
    scanf("%d %d", &ele, &pos);
    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = ele; // insert elemnent at index pos-1

    printf("after adding \n");
    for (i = 0; i <= n; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }

    return 0;
}
