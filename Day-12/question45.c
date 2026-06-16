//Q45. Write a function for Palindrome Number
#include<stdio.h>

int isPalindrome(int n) {
    int original = n;
    int reverse = 0;

    while(n > 0) {
        int rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    return original == reverse;
}

int main() {
    int num;
    scanf("%d", &num);

    if(isPalindrome(num))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}