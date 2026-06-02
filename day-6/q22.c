//prog to convert decimal to binary 
#include<stdio.h>
int main(){
    int n,contri=1,bin=0,temp,ld;
    printf("enter the decimal no:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        ld=n%2;
        bin+=ld*contri;
        n/=2;
        contri*=10;
    }
    printf("binary of decimal %d is %d",temp,bin);
    return 0;

}