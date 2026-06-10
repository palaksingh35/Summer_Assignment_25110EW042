// Write a program to Print reverse number 
// triangle. 
 
// 12345 
// 1234 
// 123 
// 12 
// 1 
// TCS, Infosys, Wipro 
#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num-i+1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
return 0;
    }
    

