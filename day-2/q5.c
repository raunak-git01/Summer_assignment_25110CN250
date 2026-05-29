//prog to find the sum of digits of a no 
#include<stdio.h>
int main(){
    int a,i,sum=0,ld,b;
    printf("enter the no:");
    scanf("%d",&a);
    b=a;
    while(a>0){
        ld=a%10;
        sum+=ld;
        a/=10;
    }
    printf("the sum of the digits of %d is %d",b,sum);
    return 0;
}