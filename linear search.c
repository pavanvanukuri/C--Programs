#include <stdio.h>

int main() {
    int n, key, i, pos = -1;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos == -1)
        printf("Not Found");
    else
        printf("Found at %d", pos);

    return 0;
}

