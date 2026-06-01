//prog to check the perfect no
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the no: ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(n==sum){
        printf("%d is the perfect no",n);
    }
    else{
        printf("%d is not the perfect no",n);
    }
    return 0;
}