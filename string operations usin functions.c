#include <stdio.h>

// Function to find length of a string
int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

// Function to copy string src into dest
void stringCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Function to compare two strings
int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return 0; // Not equal
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
        return 1; // Equal
    else
        return 0; // Not equal
}

int main() {
    char str1[100], str2[100], copy[100];

    // Read two strings
    scanf("%s", str1);
    scanf("%s", str2);

    // Find length
    printf("Length of first string: %d\n", stringLength(str1));
    printf("Length of second string: %d\n", stringLength(str2));

    // Copy str1 into copy
    stringCopy(copy, str1);
    printf("Copied string: %s\n", copy);

    // Compare str1 and str2
    if (stringCompare(str1, str2))
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}

