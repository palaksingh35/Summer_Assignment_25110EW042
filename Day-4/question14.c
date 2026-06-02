//WAP To find nth term of the  FIBBONACCI SERIES
#include <stdio.h>

int main() {
    int n, num1 = 0, num2 = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if(n == 1)
        printf("%d", num2);
    else if(n == 2)
        printf("%d", num2);
    else {
        for(int i = 3; i <= n; i++) {
            next = num1 + num2;
            num1= num2;
            num2= next;
        }
        printf("%d", num2);
    }

    return 0;
}