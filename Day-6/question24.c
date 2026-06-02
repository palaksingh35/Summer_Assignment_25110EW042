//WAP TO FIND X TO THE POWER N without pow(  )
#include<stdio.h>
int main(){
    int num,pow;
    printf("enter the number:");
    scanf("%d",&num);
    printf("enter the power:");
    scanf("%d",&pow);
    int result=1;
    for(int i=1;i<=pow;i++){
        result = result*num;
    }
    printf("the result is %d",result);
    return 0;
}