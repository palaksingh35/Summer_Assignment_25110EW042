// WAP TO PRINT FACTOR OF A NUMBER
#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("factors of a number is %d\n",num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}