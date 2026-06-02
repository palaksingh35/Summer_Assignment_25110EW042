//wap to check armstrong number
#include<stdio.h>
#include<math.h>

int main() {
    int num, temp, rem, digit = 0;
    int sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num;

    // Count digits
    while(temp > 0) {
        digit++;
        temp = temp / 10;
    }

    temp = num;

    // Calculate Armstrong sum
    while(temp > 0) {
        rem = temp % 10;
        sum = sum + pow(rem, digit);
        temp = temp / 10;
    }

    if(sum == num)
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);

    return 0;
}