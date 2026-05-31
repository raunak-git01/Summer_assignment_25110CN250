// prg to find the nth term of fibonacci series
#include<stdio.h>
int main(){
    int a=0,b=1,c,n,i;
    printf("enter the no of terms:");
    scanf("%d",&n);
    if(n==0){
        printf("%d",a);
    }
    else if(n==1)
        printf("%d",b);
    else {
        for(i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;   
    }
        printf("the nth term of series is %d",b);
    } 
   
    return 0;
} 