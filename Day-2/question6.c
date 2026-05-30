// wap to reverse a number
#include<stdio.h>
int main(){
    int n;
    int rem,rev=0;
    printf("enter the number");
    scanf("%d",&n);
    int n1=n;
    while(n1>0){
        rem=n1%10;
        rev=rev*10+rem;
        n1= n1/10;
    }
    printf("reverse of the number %d is %d",n,rev);
    return 0;

}
