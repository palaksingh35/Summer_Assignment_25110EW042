// WAP TO PRINT ARMSTRONG NUMBER IN THE RANGE
#include<stdio.h>
#include<math.h>
int main(){
    int num,temp,rem,digit=0;
    int sum=0;
    int lower,upper;
    printf("enter the lower and upper range:");
    scanf("%d%d",&lower,&upper);
    for(int num=lower;num<=upper;num++){
        temp=num;
        while(temp>0){
            digit++;
            temp=temp/10;

        }
        temp=num;
        while(temp>0){
            rem= temp%10;
            sum=sum+pow(rem,digit);
            temp= temp/10;
        }
        if(sum==num){
            printf("%d is an armstrong number\n",num);
        }
        
    }
    return 0;
}