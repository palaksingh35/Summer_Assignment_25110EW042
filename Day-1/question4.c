#include<stdio.h>
int main(){
    int count = 0;
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int n1 = n;
    while(n1>0){
        n1= n1/10;
        count ++;
    }
        

    
    printf("number of digits in %d is %d\n",n,count);
}