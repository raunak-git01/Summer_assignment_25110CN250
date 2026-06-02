//prog to convert binary to decimal 
#include<stdio.h>
int main(){
    int n,contri=1,deci=0,ld;
    printf("enter the binary no:");
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        ld=n%10;
        deci+=ld*contri;
        n/=10;
        contri*=2;
    }
    printf("decimal of binary %d is %d",temp,deci);
    return 0;
}