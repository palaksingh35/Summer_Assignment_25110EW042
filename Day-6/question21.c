//  WAP TO  CONVERT DECIMAL TO BINARY
#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int binary[32];
    int i= 0;
    while(num>0){
    int rem = num % 2;
    binary[i]=rem;
    i++;
    num= num/2;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
    return 0;
}
