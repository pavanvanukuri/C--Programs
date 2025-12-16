#include <stdio.h>

int main() {
    char a[50], b[50];
    int len = 0, i;

    printf("Enter first string: ");
    gets(a);
    printf("Enter second string: ");
    gets(b);

    // First loop ? find length of s1
    for (i = 0; a[i] != '\0'; i++) {
        len++;
    } if (a[len]!=' ')
    {
	
    a[len]=' ';
    len++;
}

    // Second loop ? concatenate s2 to s1
    for (i= 0; b[i] != '\0';len++,i++) {
        a[len] = b[i];
        
    }



    printf("After concatenation: %s", a);

    return 0;
}

