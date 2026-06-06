//Write a program to Recursive reverse number.
#include<stdio.h>

int reverseNUm(int n, int rev){
    if(n==0){
        return rev;
    }
    
        int rem = n % 10;
        int rev = rev * 10 + rem;
        return reverseNUm(n / 10, rev);
    }

    int main(){
        int n;
        printf("enter the number:");
        scanf("%d", &n);
        int result = reverseNUm(n, 0);
        printf("the reverse of %d is %d", n, result);
        return 0;
    }
