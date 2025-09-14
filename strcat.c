#include <stdio.h>
// #include <string.h>
int main()
{
    /*built in
     char str1[10], str2[10], str3[10];
     printf("enter a string");
     scanf("%s", str1);
     scanf("%s", str2);
     strcat(str1, str2);
     printf("%s", str1);
     manual concatenation*/
    char s1[10];
    char s2[10];
    int i = 0, j = 0;

    printf("enter s1::");
    fgets(s1, sizeof(s1), stdin);
    printf("enter s2::");
    fgets(s2, sizeof(s2), stdin);

    while (s1[i] != '\0')
    {
        i++;
    }
    while (s2[i] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    printf("concatenated string:%s", s1);
    return 0;
}
