// WAP TO CONVERT  BINARY TO DECIMAL
#include<stdio.h>
int main(){

int decimal = 0, digit, base=1;
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    
    while(num>0){
        digit= num%10;
        decimal = decimal+digit*base;
        base= base*2;
        num= num/10;
    }
    printf("the decimal number is %d",decimal);
    return 0;
}