#include <stdio.h>

int main() {
    char a[50], b[50];
    int i = 0, j = 0, flag = 0;

    printf("Enter first string: ");
    gets(a);
    printf("Enter second string: ");
    gets(b);

    // Compare characters until both strings finish
    for ( ; a[i] != '\0' || b[j] != '\0'; i++, j++) {
        if (a[i] != b[j]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Two strings are equal");
    else
        printf("Two strings are not equal");

    return 0;
}

