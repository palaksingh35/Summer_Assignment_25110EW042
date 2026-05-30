//WAP TO FIND PRODUCT OF DIGIT
#include<stdio.h>
int main(){
    int n ;
    int rem;
    int product = 1;
    printf("enter the number");
    scanf("%d",&n);
     int n1=n;
    while(n1>0){
        rem=n1%10;
        product=product*rem;
        n1=n1/10;
    }
    printf("product of the digit %d is %d",n,product);
    return 0;
    
}