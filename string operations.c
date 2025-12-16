#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Read input strings
    scanf("%s", str1);
    scanf("%s", str2);

    // Print length of both strings
    printf("%lu\n", strlen(str1));
    printf("%lu\n", strlen(str2));

    // Copy str1 into str2
    strcpy(str2, str1);
    printf("%s\n", str2);

    // Compare strings
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}

