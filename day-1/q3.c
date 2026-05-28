// prog to find the factorial of a given no
#include<stdio.h>
int main(){
    int a,i;
    long long fact=1;
    printf("enter the given no:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        fact*=i;
    }
    printf("the fact of %d is %lld",a,fact);
    return 0;
}