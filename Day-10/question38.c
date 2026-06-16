// Write a program to Print reverse pyramid. 
// ********* 
//  ******* 
//   ***** 
//    *** 
//     * 
#include<stdio.h>

int main() {
    int num;

    printf("Enter number of rows: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {

        // Printing spaces
        for(int j = 1; j <= num - i; j++) {
            printf("*");
        }

        // Printing stars
        for(int j = 1; j <= 2 * i - 1; j++) {
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}