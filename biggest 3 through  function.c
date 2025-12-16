#include <stdio.h>

void biggest();   // function prototype

int main() {
    biggest();    // function call
    return 0;
}

void biggest() {  // function definition
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
        printf("a is big");
    else if(b >= a && b >= c)
        printf("b is big");
    else
        printf("c is big");
}

