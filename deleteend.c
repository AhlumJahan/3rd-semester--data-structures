// delete at end ;
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

    n--;
    printf("after deleting \n");

    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }

    return 0;
}
