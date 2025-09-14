// insert acharacter in a string
#include <stdio.h>
#include <string.h>
void insertch(char s[], char ch, int pos, char res[])
{
    int length = strlen(s);
    int j = 0;
    for (int i = 0; i < length; i++)
    {
        if (i == pos)
            res[j++] = ch;
        res[j++] = s[i];
    }
    if (pos >= length)
        res[j++] = ch;
    res[j] = '\0';
}

int main()
{
    char s[20];
    printf("enter a string ");
    scanf("%s", s);
    int length = strlen(s);
    char res[length + 1];
    insertch(s, 'l', 2, res);
    printf("the new string after insertion is %s", res);

    return 0;
}
