// WAP TO pRINT AN FIBBONACI SERIES
#include<stdio.h>
int main(){
    int n, num1, num2, nextnum;
    printf("enter the number of terms:");
    scanf("%d",&n);
    num1=0;
    num2=1;
    printf("fibbonacci series:");
    for(int i =1;i<=n;i++){
        printf("%d",num1);
        nextnum=num1+num2;
        num1=num2;
        num2=nextnum;

    }
    return 0;
}