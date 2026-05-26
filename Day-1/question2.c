#include<stdio.h>
int main(){
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    for(int i=10;i>0;i--){
         int multiply= n*i;
         printf("%d x %d = %d\n",n,i,multiply);


    }
    return 0;
    
    
}