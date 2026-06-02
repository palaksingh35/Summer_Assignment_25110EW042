//  WAP TO CHECK STRONG NUMBER
#include<stdio.h>
 int main(){
    int num , temp,rem,fact=1,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        rem=temp%10;
        int fact=1;
        for(int i =1;i<=rem;i++){
            fact= fact*i;
        }
        sum= sum+fact;
        temp= temp/10;
    }
    if (sum==num){
        printf("%d is a strong number",num);


    }
    else{
        printf("%d is not a strong number",num);
    }
    return 0;
 }
    