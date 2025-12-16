#include <stdio.h>

// Recursive function to find factorial
int fact(int n) {
    if (n == 0)           // Base case
        return 1;
    else
        return n * fact(n - 1);   // Recursive call
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factorial = %d", fact(n));
    return 0;
}

