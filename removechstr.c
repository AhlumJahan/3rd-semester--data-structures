// remove a character at a position
#include <stdio.h>
#include <string.h>
void removeletter(char s[], int pos)
{
    int len = strlen(s);
    if (pos < 0 || pos >= len)
    {
        return;
    }

    for (int i = pos; i < len - 1; i++)
    {
        s[i] = s[i + 1];
    }
    s[len - 1] = '\0';
}
int main()
{
    char s[20];
    int pos;
    printf("enter string :");
    fgets(s, sizeof(s), stdin);
    printf("enter pos :");
    scanf("%d ", &pos);
    removeletter(s, pos);
    printf("the new string after removal is %s", s);
    return 0;
}
