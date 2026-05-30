// WAP TO PRINT PRIME NUMBER IN THE RANGE
#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        int count = 0;
        for(int j =2; j<i;j++){
            if(i%j==0){
                count++;
                break;
            }
            
        }
        if(count==0){
        

        }



    }
}