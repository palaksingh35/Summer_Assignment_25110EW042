// WAP TO COUNT SET BITS IN A NUMBER
#include<stdio.h>
int main(){
    int num , count =0;
    printf("enter the number:");
    scanf("%d",&num);
    while(num>0){
        if(num%2==1)
            count++;
        num=num/2;
    }
    printf("the number of set bits is %d",count);
    return 0;
}