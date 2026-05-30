//prog to find the gcd of two no
#include<stdio.h>
int main(){
    int a,b,i,k;
    printf("enter the two no ");
    scanf("%d %d",&a,&b);
    for(i=1;i<=(a<b?a:b);i++){
        if(a%i==0&&b%i==0)
            k=i;  
    }
    printf("the gcd of %d and %d is %d",a,b,k);
    return 0;
}