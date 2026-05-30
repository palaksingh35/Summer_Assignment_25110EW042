#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    int n1=n;
    while(n1>0){
        int rem=n1%10;
        sum=sum +rem;
       
        n1=n1/10;

    }
    printf("sum of the digit %d is %d\n",n,sum);
    return 0;
    }

