// length of string
#include <stdio.h>
int main()
{
    char str[50];
    int len = 0;
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0')
    {
        if (str[len] == '\n')
        {
            break;
        }
        len++;
    }

    printf("length of astring is %d", len);
    return 0;
}

/*coding bat,code war -30each
hacker rank -20
top coder,code force-2 each
leetcode-25*/
