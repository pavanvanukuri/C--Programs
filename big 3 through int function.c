#include <stdio.h>

int biggest();   // function prototype

int main() {
    int big;  
	big=biggest();
	printf("biggest value is %d",big);

    return 0;
}

int biggest() {  // function definition
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
    return a;
    else if(b >= a && b >= c)
        return b;
    else
    return c;
}

