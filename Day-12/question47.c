//Write a function for Fibonacci Series
#include<stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c;

    printf("%d %d ", a, b);

    for(int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);

        a = b;
        b = c;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}