// Write a program to Print repeated character 
// pattern. 
// A 
// BB 
// CCC 
// DDDD 
// EEEEE 
// Microsoft, Adobe, Paytm 
#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    char ch = 'A';
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf("%c",ch);
            

        }
        printf("\n");
        ch++;
    }
    return 0;
}