// prog to find x^n without using pow fun
#include<stdio.h>
int main(){
    int x,n,i;
    long long ans=1;
    printf("enter the base and power :");
    scanf("%d %d",&x,&n);
    for(i=1;i<=n;i++){
        ans*=x;
    }
    printf("%lld",ans);
    return 0;
}