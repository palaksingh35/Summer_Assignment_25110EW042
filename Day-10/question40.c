// Write a program to Print character pyramid. Microsoft, Adobe, Paytm 
//       A 
//    ABA 
//   ABCBA 
//  ABCDCBA 
// ABCDEDCBA
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

        // Print increasing characters
        for(int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        // Print decreasing characters
        for(int j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}