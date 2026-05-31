//prog to find generate the fibonacci series
#include<stdio.h>
int main(){
    int n,a=0,b=1,c,i;
    printf("enter the no upto series is generated:");
    scanf("%d",&n);
    printf("fibonacci series: ");
    for(i=1;i<=n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;    
    }
    
    return 0;
}
