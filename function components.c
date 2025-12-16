#include <stdio.h>

// 1. Function Declaration
int add(int, int);

int main() {
    // 3. Function Call
    int sum = add(10, 20);
    printf("Sum = %d", sum);
    return 0;
}

// 2. Function Definition
int add(int x, int y) {
    return x + y;
}

