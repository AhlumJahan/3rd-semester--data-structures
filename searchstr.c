// search a character in a string
#include <stdio.h>
#include <string.h>
int findchar(char s[], char ch)
{
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ch)
            return i;
    }
    return -1;
}
int main()
{

    char s[20];
    char ch;
    printf("enter a string:");
    scanf("%s", s);//remove & as s is already an array so we dont need a &
    printf("search a character:");
    scanf(" %c", &ch);//%c format reads even a whitespace so we have to add a space befor it
    printf("the position of character is on %d :", findchar(s, ch));

    return 0;
}
