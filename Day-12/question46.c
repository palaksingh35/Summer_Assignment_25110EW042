//Q46. Write a function for Armstrong Number
#include<stdio.h>

int isArmstrong(int n) {
    int original = n;
    int sum = 0;

    while(n > 0) {
        int rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    return original == sum;
}

int main() {
    int num;
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}