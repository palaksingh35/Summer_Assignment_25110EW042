// WAP TO CHECK WHATHER THGE NUMBER IS PRIME OR NOT
#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n%2==0){
        printf("entered number is prime ");
    }
    else{
        printf("entered number is not prime");
    }
    return 0;
}