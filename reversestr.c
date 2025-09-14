// input a string is reversed order
#include <stdio.h>
#include <string.h>
int main()
{

    char str[100];
    int length = 0;
    printf("enter a string");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0'; // remove newline character

    while (str[length] != '\0')
    {
        length++;
    }
    printf("reversed string:");
    for (int i = length - 1; i >= 0; i--)
    {
        printf(" %c", str[i]);
    }

    printf("\n");

    return 0;
}
