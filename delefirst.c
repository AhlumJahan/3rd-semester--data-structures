// delete at beginning at index0;
#include <stdio.h>
int main()
{

    int n, i;

    int arr[] = {10, 9, 8, 7, 6};
    n = sizeof(arr) / sizeof(arr[0]);
    printf("before deletion\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }

    // we have to shift elements to left;starting from 2nd elemnt
    int ele;
    printf("enter element:");
    scanf("%d", &ele);
    if (ele == arr[0])
    {
        for (i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }

        n--;
    } // reduce the array size
    else
    {
        printf("this element doesnt belong to 0 index");
    }

    printf("after deleting \n");

    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }

    return 0;
}
