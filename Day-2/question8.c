//WAP TO CHECKL WHETHER THE THE NUMBER IS PALLINDROME
#include<stdio.h>
int main(){
    int n,rev=0;
    printf("enter the number: ");
    scanf("%d",&n);
    int n1= n;
    while(n1>0){
        int rem=n1%10;
        rev=rev*10+rem;
        n1=n1/10;
    }
    if(rev==n){
        printf("number is pallindrome");
    }
    else{
        printf("number is not pallindrome");
    }
    return 0;
}
