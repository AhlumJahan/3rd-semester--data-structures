// compare two strings if they are same
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool stringsame(char s1[], char s2[])
{

    return strcmp(s1, s2) == 0;
}
int main()
{

    char s1[20];
    char s2[20];
    printf("enter string 1 and 2:");
    scanf("%s", &s1);
    scanf("%s", &s2);
    if (stringsame(s1, s2))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
