// Write a program to Print number pyramid. 
//     1 
//    121 
//   12321 
//  1234321 
// 123454321
#include<stdio.h>

int main() {
    int num;

    printf("Enter number of rows: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {

        // Print spaces
        for(int j = 1; j <= num - i; j++) {
            printf(" ");
        }

        // Print increasing numbers
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing numbers
        for(int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}