//Write a function to check whether a number is prime
#include<stdio.h>

int isPrime(int n) {

    if(n <= 1)
        return 0;

    for(int i = 2; i < n; i++) {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPrime(num))
        printf("Prime Number");
    else
        printf("Not Prime Number");

    return 0;
}