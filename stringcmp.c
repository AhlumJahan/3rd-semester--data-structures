// compare two strings if they are same

#include <stdio.h>

// Function to compare two strings
int compareStrings(char str1[], char str2[]) {
    int i = 0;

    // Loop until a mismatch or end of both strings
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return 1;  // strings are not equal
        i++;
    }

    // If one string ends before the other
    if (str1[i] != str2[i])
        return 1; // not equal

    return 0; // strings are equal
}

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    if (compareStrings(s1, s2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}

