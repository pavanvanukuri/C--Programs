#include <stdio.h>

int main() {
    float a, b, result;
    char op;

    scanf("%f %f", &a, &b);
    scanf(" %c", &op);

    switch (op) {
        case '+':
            result = a + b;
            printf("%.2f", result);
            break;
        case '-':
            result = a - b;
            printf("%.2f", result);
            break;
        case '*':
            result = a * b;
            printf("%.2f", result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("%.2f", result);
            } else {
                printf("Error");
            }
            break;
        default:
            printf("Invalid");
    }

    return 0;
}

