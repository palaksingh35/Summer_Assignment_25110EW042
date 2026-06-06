//Write a program to Print character triangle. 
// A 
// AB 
// ABC 
// ABCD 
// ABCDE 
#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    printf("the character triangle is :\n");
    
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c", 'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}
