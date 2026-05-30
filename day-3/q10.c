//prog to check whether the no is prime or not 
#include<stdio.h>
int main(){
    int a,i,count=0;
    printf("enter the no:");
    scanf("%d",&a);
    if(a<=1){
        printf("the no is not prime no");
    }
    else{
        for(i=2;i<=a/2;i++){
            if(a%i==0){
                count=1; //that means a divisor has been found instead of the no itself
                break;
            }
            
        }}
    if(count==1){
        printf("the no is not prime");
    }
    else
        printf("the no is prime");
   
    return 0;
}