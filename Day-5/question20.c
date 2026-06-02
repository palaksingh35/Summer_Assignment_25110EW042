// WAP TO FIND THE LARGEST PRIME FACTOR OF A NUMBER
#include<stdio.h>
int main(){
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    int largestFactor=-1;
    for(int i=2;i<=num;i++){
        while(num%i==0)
        {
            largestFactor =i;
            num= num/i;

        }
        if(num>1){
            largestFactor= num;
            printf("largest prime factor is %d",largestFactor);
        }
    }
        return 0;
    }